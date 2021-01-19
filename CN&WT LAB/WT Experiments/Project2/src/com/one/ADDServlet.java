package com.one;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class ADDServlet
 */
@WebServlet("/ADDServlet")
public class ADDServlet extends HttpServlet {
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		int i = Integer.parseInt(request.getParameter("number1"));
        int j = Integer.parseInt(request.getParameter("number2"));		
		int k = i + j;
		PrintWriter obj = response.getWriter(); 
		obj.println(k);
		//response.getWriter().append("Served at: ").append(request.getContextPath());
	}

}
