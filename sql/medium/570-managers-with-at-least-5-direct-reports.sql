# Write your MySQL query statement below
SELECT 
    e.name
FROM Employee e
JOIN (
    SELECT
        managerId,
        COUNT(managerId) as total_reports
    FROM Employee
    GROUP BY managerId
    HAVING total_reports >= 5
) as tr ON (e.id = tr.managerId)
