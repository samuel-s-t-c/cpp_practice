package cp1;

import edu.princeton.cs.algs4.StdDraw;

public class VisualAccumulatorMy {
    private double total;
    private int N;
    public VisualAccumulatorMy(int trials, double max)
    {
        StdDraw.setXscale(0, trials);
        StdDraw.setYscale(0, max);
        StdDraw.setPenRadius(.005);
    }
    public void addDataValue(double val)
    {
    N++;
    total += val;
    StdDraw.setPenColor(StdDraw.DARK_GRAY);
    StdDraw.point(N, val);
    StdDraw.setPenColor(StdDraw.RED);
    StdDraw.point(N, total/N);
    }
    public double mean()
    {
        return total/N;
    }
    public String toString()
    {
        return "Mean (" + N + " values): "
                + String.format("%7.5f", mean());
    }
}
