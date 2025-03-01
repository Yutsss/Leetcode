# MySQL
SELECT 
    ROUND((COUNT(CASE WHEN order_date = customer_pref_delivery_date THEN 1 END) / COUNT(delivery_id)) * 100, 2) as immediate_percentage
FROM Delivery d
JOIN (
    SELECT 
        MIN(order_date) as min_od_id,
        customer_id
    FROM Delivery
    GROUP BY customer_id
) as fo ON (d.order_date = fo.min_od_id) AND d.customer_id = fo.customer_id

# PostgreSQL
SELECT 
    ROUND(((COUNT(CASE WHEN order_date = customer_pref_delivery_date THEN 1 END) * 100.0) / COUNT(delivery_id)), 2) as immediate_percentage
FROM (
    SELECT DISTINCT ON (customer_id) *
    FROM Delivery
    ORDER BY customer_id, order_date ASC
) as fo 
