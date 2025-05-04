@interface AWERLVisitTask : NSObject
@property (nonatomic) @ item;
@property (nonatomic) @ context;
@property (nonatomic) BOOL visited;
- (void)setVisited:;
- (void)setItem:;
- (id)item;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (BOOL)visited;
+ (id)taskWithItem:context:;
@end
