
struct DataPoint {
  double x,y;
};

struct distances {
  double dist1, dist2;
};


class D2dTreeNode {
  DataPoint point;
  D2dTreeNode *left,*right;
public:
  void insert(DataPoint newpoint);
  double* distanceTo(DataPoint farpoint,double maxdist);
};

int main() {
  return 0;
}
