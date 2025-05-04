@interface AWELifeFeedsLayoutSection : NSObject
@property (nonatomic) NSMutableArray inner_nodeTagList;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rect;
@property (nonatomic) double minY;
@property (nonatomic) double maxY;
@property (nonatomic) NSArray nodeTagList;
- (id)inner_nodeTagList;
- (void)addNodeTag:;
- (id)nodeTagList;
- (void)setInner_nodeTagList:;
- (void)setRect:;
- (id)rect;
- (void).cxx_destruct;
- (double)maxY;
- (double)minY;
- (void)setMaxY:;
- (void)setMinY:;
@end
