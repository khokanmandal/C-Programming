				*****Important Takeways*****
1-->In most of the programming languages,static scoping is
	followed instead of dynamic scoping.
2-->Languages,including Algol,Pascal,C,Haskell,Scheme etc. are
	statically scoped.
3-->Some languages,including SNOBOL,APL,Lisp etc. are
	dynamically scoped.
4-->As C follows static scoping therefore it is not possible to see
	programmatically,how dynamic scoping works in C.
	
<***>Perl is a programming language which supports both static as well as
	 dynamic scoping.
	 
Example :-
			$x=50;
			
			sub fun2
			{
				return $x;
			}
			sub fun1
			{
				local $x=10;//local keyword makes your variable visible up the call stack too.
				my $y=fun2();//my keywords makes your variable visible only where it's declared.
				return $y;
			}
			print fun1();