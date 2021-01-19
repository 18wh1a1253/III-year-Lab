package com.db;


import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;

import com.mysql.cj.xdevapi.Statement;

public class JDBCConection {

	public static void main(String[] args) throws Exception {
		
		try{
			Class.forName("com.mysql.cj.jdbc.Driver");
			Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/18wh1a1253","root","harshi11");
			java.sql.Statement stmt = con.createStatement();
			System.out.println("Connection established successfully");
				ResultSet rs = ((java.sql.Statement) stmt).executeQuery("select * from author");
				while(rs.next()){
					System.out.println(rs.getInt(1)+" "+rs.getString(2)+" "+rs.getInt(3)+" "+rs.getString(4));
				}
				
				stmt.close();
				con.close();
			
		}
		catch(ClassNotFoundException e){
			e.printStackTrace();
			
		}
		
	}
	
}
