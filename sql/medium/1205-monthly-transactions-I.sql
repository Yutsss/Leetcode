# Write your MySQL query statement below
SELECT
    CONCAT(YEAR(trans_date), '-', LPAD(MONTH(trans_date), 2, '0')) AS month,
    country, 
    COUNT(id) as trans_count,
    COUNT(CASE WHEN state = "approved" THEN 1 END) as approved_count,
    SUM(amount) as trans_total_amount,
    SUM(CASE WHEN state = "approved" THEN amount ELSE 0 END) as approved_total_amount
FROM Transactions
GROUP BY month, country


