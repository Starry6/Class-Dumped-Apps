@interface BDUGLuckyRouterContext : NSObject
@property (nonatomic) NSString originUrl;
@property (nonatomic) NSString currentUrl;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) BOOL alreadyHandle;
@property (nonatomic) @? routerCompletion;
@property (nonatomic) @? routerContextCompletion;
@property (nonatomic) double routingStartTime;
- (void)setExtraParams:;
- (BOOL)alreadyHandle;
- (id)currentUrl;
- (id)extraParams;
- (void)finishWithResult:errorInfo:;
- (id)initWithUrl:completion:;
- (id)initWithUrl:contextCompletion:;
- (id)initWithUrl:extraParams:contextCompletion:;
- (id)originUrl;
- (id)routerCompletion;
- (id)routerContextCompletion;
- (double)routingStartTime;
- (void)setAlreadyHandle:;
- (void)setCurrentUrl:;
- (void)setOriginUrl:;
- (void)setRouterCompletion:;
- (void)setRouterContextCompletion:;
- (void)setRoutingStartTime:;
- (void)setupData:extraParams:;
- (void)dealloc;
- (void).cxx_destruct;
@end
