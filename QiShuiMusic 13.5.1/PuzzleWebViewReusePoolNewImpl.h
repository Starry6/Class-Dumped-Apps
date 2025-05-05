@interface PuzzleWebViewReusePoolNewImpl : NSObject
@property (nonatomic) NSMutableArray readyToUseWebViewsGroups;
@property (nonatomic) NSTimer memoryWarningTimer;
@property (nonatomic) BOOL reuseDisabled;
@property (nonatomic) NSDictionary reuseConfig;
- (void)enqueueWebView:;
- (void)setReuseConfig:;
- (id)fetchWebViewWithContext:;
- (id)memoryWarningTimer;
- (id)readyToUseWebViewsGroups;
- (void)recoverReuse;
- (id)reuseConfig;
- (BOOL)reuseDisabled;
- (void)reuseWebview:;
- (void)setMemoryWarningTimer:;
- (void)setReadyToUseWebViewsGroups:;
- (void)setReuseDisabled:;
- (id)init;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)clearPool;
- (void).cxx_destruct;
+ (void)enqueueWebView:;
+ (id)fetchWebViewWithContext:;
+ (id)sharedPool;
@end
