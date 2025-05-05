@interface PuzzleHybridKitBuilder : NSObject
@property (nonatomic) PuzzleContext context;
- (void)initializeForUse:;
- (id)lynxViewWithFrame:URL:context:;
- (void)prepareEnvironment;
- (void)prepareForReUse:;
- (id)puzzleWebViewWithURL:context:;
- (id)puzzleWebViewWithURL:context:enableReuse:;
- (id)context;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)setContext:;
@end
