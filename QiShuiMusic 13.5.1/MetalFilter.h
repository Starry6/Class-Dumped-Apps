@interface MetalFilter : NSObject
@property (nonatomic) VDMetalContext context;
@property (nonatomic) NSMutableArray pipelines;
@property (nonatomic) {?=QQQ} threadNum;
@property (nonatomic) {?=QQQ} threadGroupsCount;
- (id)getExecPipeline;
- (void)configureArgsTableWithEncoder:Param:;
- (int)execFilterInput:Output:Block:;
- (id)initWithFilterName:Context:;
- (void)setThreadGroupsCount:;
- (void)setThreadNum:;
- (id)threadGroupsCount;
- (id)threadNum;
- (id)context;
- (id)pipelines;
- (void).cxx_destruct;
- (void)setContext:;
- (void)setPipelines:;
@end
