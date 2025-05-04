@interface AWEEcommerceRecorderFilterGesturePlugin : NSObject
@property (nonatomic) <IESServiceProvider> serviceProvider;
@property (nonatomic) <ACCFilterService> filterService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <ACCFeatureComponent> component;
- (void)bindServices:;
- (id)filterService;
- (void)setFilterService:;
- (void)gesturesWillDisabled;
- (void)gesturesWillEnable;
- (id)hostComponent;
- (id)component;
- (void).cxx_destruct;
- (id)serviceProvider;
- (void)setComponent:;
- (void)setServiceProvider:;
+ (id)hostIdentifier;
@end
