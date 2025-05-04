@interface AWERootWindowInitTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEPadModuleAdapter;
- (id)aAWEMainModuleServiceDOUYINLGAdapter;
- (id)aAWEMainModuleServiceDOUYINSSAdapter;
+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEMainModuleServiceDOUYINLGAdapterClass;
+ (void)rootWindowInit;
+ (Class)aAWEMainModuleServiceDOUYINSSAdapterClass;
+ (id)initWindow;
+ (void)reloadTabbarDefault;
+ (void)setupNetCombine;
+ (void)reloadTabbarIfHitSecondPageDispatchOpt;
+ (void)reloadTabBarWhenExternalRouterCompleteByTimer:params:;
+ (void)execute;
@end
