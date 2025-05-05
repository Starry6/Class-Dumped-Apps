@interface IESECShopProductsSharedContext : NSObject
@property (nonatomic) UIViewController<IESECShopProductsEnvironmentalContext> currentViewController;
- (void)addViewController:;
- (void)initializePitayaMessageHandler;
- (void)removePitayaMessageHandler;
- (void)removeTopViewController;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setCurrentViewController:;
- (id)currentViewController;
+ (id)sharedInstance;
@end
