DELETE FROM Person 
WHERE
    Id NOT IN (SELECT 
        *
    FROM
        (SELECT 
            MIN(Id)
        FROM
            Person
        GROUP BY Email) AS T);






#follow answer is error:  but,i do not know why

DELETE FROM Person
WHERE
    Id NOT IN (SELECT
        MIN(Id)
    FROM
        Person
    GROUP BY Email);
