struct DataPoint {
  double x,y;
};

struct KPoints {
  int k;
  DataPoint *points;
};

struct KDistances {
  int k;
  double *dists;
};

struct PointAnd2Distances {
  DataPoint point;
  double dist1;
  double dist2;
};

class D2dTreeNode {
  DataPoint point;
  D2dTreeNode *left,*right;
 public:
  void list(DataPoint* elements);
  void insert(DataPoint newpoint);
  void remove(DataPoint oldpoint);
  void deleteTree();
  KPoints nearestK(DataPoint otherpoint,int k, double maxdist);
  KDistances distanceToNearestK(DataPoint otherpoint, int k, double maxdist);
  PointAnd2Distances nearestAndNextDistance(DataPoint otherpoint, double maxdist);
};

class D2dTreeRoot : D2dTreeNode {
  unsigned int size;
};
