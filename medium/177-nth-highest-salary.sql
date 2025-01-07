CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  SET N = N - 1;

  RETURN (
      # Write your MySQL query statement below.
        SELECT salary FROM
            (SELECT DISTINCT salary 
            FROM Employee 
            ORDER BY salary DESC 
            ) AS DistinctSortedSalary
        LIMIT 1 OFFSET N
  );
END