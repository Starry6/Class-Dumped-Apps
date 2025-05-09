@interface AWEAdComponentRendManager : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) @? playerStartPlayHandler;
@property (nonatomic) @? feedVideoPlaybackTimeHandler;
@property (nonatomic) ^{__CFRunLoopObserver=} runLoopObserver;
@property (nonatomic) BOOL hasLoad;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWECommerceComponentContext> commerceContext;
- (id)commerceContext;
- (void)setCommerceContext:;
- (void)setHasLoad:;
- (BOOL)hasLoad;
- (void)setupVideoStartMonitor;
- (void)setupVideoProgressMonitor;
- (void)setupVideoMonitorBeforeReset;
- (void)setupVideoMonitorFree;
- (id)playerStartPlayHandler;
- (id)feedVideoPlaybackTimeHandler;
- (void)renderNormal;
- (void)setPlayerStartPlayHandler:;
- (void)setFeedVideoPlaybackTimeHandler:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
- (void)reset;
- (id)runLoopObserver;
- (void)setRunLoopObserver:;
- (void)willDisplay;
+ (BOOL)canShowComponentWithContext:;
+ (long long)loadOptimizationWithModel:;
+ (long long)loadOptimization;
@end
