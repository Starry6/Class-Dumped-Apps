@interface AWEECommerceWidgetGuideEntranceModel : NSObject
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSString showFrom;
@property (nonatomic) q showLevel;
@property (nonatomic) BOOL needLoading;
@property (nonatomic) BOOL isWaiting;
@property (nonatomic) BOOL needWait;
@property (nonatomic) double maxWaitInterval;
@property (nonatomic) NSTimer interceptorTimer;
@property (nonatomic) NSString scene;
@property (nonatomic) q toolType;
@property (nonatomic) BOOL interceptorHasEnd;
@property (nonatomic) @? completionBlock;
@property (nonatomic) UIViewController currentPage;
@property (nonatomic) NSString recommendLevel;
- (void)setNeedLoading:;
- (void)setIsWaiting:;
- (BOOL)needLoading;
- (id)initWithScene:params:;
- (id)showFrom;
- (long long)showLevel;
- (void)setToolType:;
- (void)startInterceptorIfNeeded;
- (void)invokeCompletionIfNeededWithScene:enterFrom:result:extra:;
- (BOOL)checkEvadeIfNeededWithScene:enterFrom:;
- (id)recommendLevel;
- (void)setRecommendLevel:;
- (id)showFromParams:;
- (void)setShowFrom:;
- (void)setShowLevel:;
- (BOOL)checkValidWithScene:enterFrom:;
- (BOOL)interceptorHasEnd;
- (BOOL)needWait;
- (double)maxWaitInterval;
- (void)invokeCompletionWithResult:extra:;
- (void)setInterceptorTimer:;
- (void)trackerGuideShowWithResult:hasIntercepted:;
- (id)interceptorTimer;
- (void)setScene:;
- (void)setCompletionBlock:;
- (id)scene;
- (id)completionBlock;
- (id)currentPage;
- (void)setCurrentPage:;
- (void).cxx_destruct;
- (BOOL)isWaiting;
- (id)params;
- (void)setParams:;
- (long long)toolType;
@end
