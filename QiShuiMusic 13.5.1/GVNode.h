@interface GVNode : NSObject
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double w;
@property (nonatomic) double h;
@property (nonatomic) double cx;
@property (nonatomic) double cy;
@property (nonatomic) NSMutableOrderedSet inNodes;
@property (nonatomic) NSMutableOrderedSet outNodes;
@property (nonatomic) Q inDegree;
@property (nonatomic) Q outDegree;
@property (nonatomic) q rank;
@property (nonatomic) q index;
@property (nonatomic) GVNode prev;
@property (nonatomic) GVNode next;
@property (nonatomic) Q inPriority;
@property (nonatomic) Q outPriority;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) {CGPoint=dd} origin;
@property (nonatomic) {CGPoint=dd} center;
@property (nonatomic) {CGSize=dd} size;
- (double)h;
- (id)next;
- (void)setNext:;
- (id)prev;
- (id)center;
- (double)w;
- (id)init;
- (void)setCenter:;
- (void)setOrigin:;
- (void)dealloc;
- (void)setX:;
- (void)setFrame:;
- (void)setY:;
- (double)y;
- (double)x;
- (id)origin;
- (long long)rank;
- (void)setPrev:;
- (id)frame;
- (long long)index;
- (void)setIndex:;
- (void)setW:;
- (id)description;
- (void)setRank:;
- (void)setH:;
- (void)setSize:;
- (id)size;
- (double)cx;
- (void)setCx:;
- (double)cy;
- (void)setCy:;
- (unsigned long long)inDegree;
- (unsigned long long)outDegree;
- (BOOL)hasEdgeFrom:;
- (BOOL)hasEdgeTo:;
- (void)addEdgeFrom:;
- (void)addEdgeTo:;
- (void)removeEdgeFrom:;
- (void)removeEdgeTo:;
- (void)computePriority;
- (void)traversePostorder:withCallback:stopper:randomize:;
- (void)traversePreorder:withCallback:randomize:;
- (id)inNodes;
- (void)setInNodes:;
- (id)outNodes;
- (void)setOutNodes:;
- (unsigned long long)inPriority;
- (void)setInPriority:;
- (unsigned long long)outPriority;
- (void)setOutPriority:;
@end
