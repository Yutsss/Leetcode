SELECT DISTINCT
    l3.num AS ConsecutiveNums
FROM 
    Logs l,
    Logs l2,
    Logs l3
WHERE 
    l3.id = l2.id - 1 AND
    l2.id = l.id - 1 AND
    l3.num = l2.num AND
    l2.num = l.num