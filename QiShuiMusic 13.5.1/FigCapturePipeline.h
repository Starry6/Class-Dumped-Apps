@interface FigCapturePipeline : NSObject
@property (nonatomic) NSArray nodes;
@property (nonatomic) NSString name;
@property (nonatomic) BWGraph graph;
- (id)graph;
- (void)dealloc;
- (BOOL)addNode:error:;
- (id)nodes;
- (id)name;
- (id)initWithGraph:name:;
@end
