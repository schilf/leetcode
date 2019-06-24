SELECT 
    d.Name Department, e.Name Employee, e.Salary Salary
FROM
    Employee e
        INNER JOIN
    Department d ON d.id = e.DepartmentId
WHERE
    (SELECT 
            COUNT(DISTINCT Salary)
        FROM
            Employee t1
        WHERE
            t1.DepartmentId = d.Id) <= 3
        OR e.Salary >= (SELECT 
            Salary
        FROM
            Employee t2
        WHERE
            t2.DepartmentId = d.Id
        GROUP BY t2.Salary
        ORDER BY t2.Salary DESC
        LIMIT 2 , 1)
ORDER BY Department , Salary DESC;
