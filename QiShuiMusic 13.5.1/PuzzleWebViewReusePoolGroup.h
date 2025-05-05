@interface PuzzleWebViewReusePoolGroup : NSObject
@property (nonatomic) Q poolSize;
@property (nonatomic) NSMutableArray readyToUseWebViews;
- (id)readyToUseWebViews;
- (void)setReadyToUseWebViews:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPoolSize:;
- (unsigned long long)poolSize;
- (void)setPoolSize:;
@end
