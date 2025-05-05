@interface GVEdge : NSObject
@property (nonatomic) NSMutableArray dummies;
@property (nonatomic) BOOL reversed;
@property (nonatomic) GVNode from;
@property (nonatomic) GVNode to;
- (void)setReversed:;
- (id)init;
- (void)dealloc;
- (BOOL)reversed;
- (id)description;
- (id)from;
- (id)to;
- (id)initWithFromNode:to:;
- (id)dummies;
- (void)setDummies:;
@end
