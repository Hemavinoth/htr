#include<iostream.h>
#include<conio.h>

class Interval {
	int st;
	int en;
 
	Interval() 
	{
		s = 0;
		e = 0;
	}
 
	Interval(int s, int e) {
		st = s;
		en= e;
	}
}
  class Solution {
	public ArrayList<Interval> merge(ArrayList<Interval> intervals) {
 
		if (intervals == null || intervals.size() <= 1)
			return intervals;
 
		Collections.sort(intervals, new IntervalComparator());
 
		ArrayList<Interval> result = new ArrayList<Interval>();
 
		Interval prev = intervals.get(0);
		for (int i = 1; i < intervals.size(); i++) {
			Interval curr = intervals.get(i);
 
			if (prev.end >= curr.start) {
			
				Interval merged = new Interval(prev.st, Math.max(prev.en, curr.en));
				prev = merged;
			} else {
				result.add(prev);
				prev = curr;
			}
		}
 
		result.add(prev);
 
		return result;
	}
}
 
class IntervalComparator implements Comparator<Interval> {
	public int compare(Interval i1, Interval i2) {
		return i1.start - i2.start;
	}
}
