struct DataPoint {
  double x,y;
};

struct kPoints {
  int k;
  DataPoint *points;
};

struct kDistances {
  int k;
  double *dists;
};


class D2dTreeNode {
  DataPoint point;
  D2dTreeNode *left,*right;
public:
  void insert(DataPoint newpoint);
  kPoints nearestK(DataPoint newpoint,int k, double maxdist);
  kDistances distanceToNearestK(DataPoint newpoint, int k, double maxdist);
};
