@interface AWEPostPageElement : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWEPostPageServiceCoordinator> serviceCoordinator;
@property (nonatomic) <AWEPostPageContext> context;
@property (nonatomic) UIView contentView;
@property (nonatomic) UIViewController viewController;
@property (nonatomic) q visibleCount;
@property (nonatomic) BOOL isVisible;
@property (nonatomic) BOOL forceReceiveEvents;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) q scene;
@property (nonatomic) q priority;
@property (nonatomic) @ featureConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setVisibleCount:;
- (void)elementAppear;
- (void)bindServices:;
- (id)featureConfig;
- (void)setFeatureConfig:;
- (id)serviceCoordinator;
- (BOOL)forceReceiveEvents;
- (void)contextDidReady;
- (void)setServiceCoordinator:;
- (void)elementDisappear;
- (void)cleanUp;
- (void)viewWillDisappear:;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (long long)scene;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (long long)priority;
- (id)contentView;
- (id)viewController;
- (void)viewDidDisappear:;
- (void)setContext:;
- (void)viewWillAppear:;
- (BOOL)isVisible;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)viewDidAppear:;
- (BOOL)isEnabled;
- (id)context;
- (void)setViewController:;
- (long long)visibleCount;
+ (Class)featureConfigClass:;
+ (long long)registerScene:;
+ (BOOL)isCustomizedForFeatureConfig:;
+ (id)type;
@end
