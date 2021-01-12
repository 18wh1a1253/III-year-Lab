package com.db;

import java.sql.*;

public class DBConnection {
	public static void main(String[] args) {
		try {
			Class.forName("com.mysql.jdbc.Driver");
			try {
				Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/Demo","root","divya");
				Statement stmt = con.createStatement();
				System.out.println("Connection Established");
				ResultSet rs = stmt.executeQuery("select * from Employee");
				while(rs.next()) {
					System.out.println("The empId is: " + rs.getInt(1) + " " + "The empName is: " + (rs.getString(2)) + " The empSalary is: " + (rs.getInt(3)) + " " + " The empAddress is: " +  (rs.getString(4)));
                    System.out.println("\n");				
				}
				stmt.close();
				con.close();
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		
	}
}
