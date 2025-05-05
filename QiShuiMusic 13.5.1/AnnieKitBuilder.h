@interface AnnieKitBuilder : PuzzleHybridKitBuilder
@property (nonatomic) AnnieContext context;
- (id)createPrerenderViewWithFrame:schema:;
- (id)createViewWithFrame:url:context:;
- (id)createViewWithFrame:url:context:annieKernelType:;
- (id)resolveSchema:;
- (id)context;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)setContext:;
@end
