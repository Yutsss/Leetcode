SELECT 
    user_id,
    ROUND(total_confirmed / total_confirmation, 2) as confirmation_rate
FROM (
    SELECT 
        s.user_id as user_id, 
        COUNT(CASE WHEN c.action = 'confirmed' THEN 1 END) as total_confirmed,
        COUNT(s.user_id) as total_confirmation
    FROM Signups s
    LEFT JOIN Confirmations c ON (s.user_id = c.user_id)
    GROUP BY s.user_id
) as data