@interface PuzzleLifeCycleHelper : NSObject
@property (nonatomic) <IESHYHybridViewProtocol> kitView;
@property (nonatomic) PuzzleContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewDidLoadFailedWithUrl:error:;
- (BOOL)viewShouldStartLoadWithRequest:;
- (id)kitView;
- (void)viewDidCreated:;
- (void)setKitView:;
- (void)viewDidFinishLoadWithURL:;
- (void)viewDidFirstScreen;
- (void)viewDidHitCache:cacheType:;
- (void)viewDidRecieveError:;
- (void)viewDidStartLoading;
- (void)viewWillCreated:;
- (void)viewWillDealloc:;
- (id)context;
- (void).cxx_destruct;
+ (void)registerLifeCycleInterceptor:;
+ (void)unregiserLifeCycleInterceptor:;
+ (id)broadcaster;
@end
