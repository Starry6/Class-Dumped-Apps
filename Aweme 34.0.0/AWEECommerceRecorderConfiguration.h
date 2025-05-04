@interface AWEECommerceRecorderConfiguration : NSObject
@property (nonatomic) <ACCBusinessTemplate> businessTemplate;
@property (nonatomic) <ACCRouterCoordinatorProtocol> routerCoordinator;
@property (nonatomic) @ inputData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithInputData:;
- (id)businessTemplate;
- (id)businessServiceContainerWithSessionContainer:;
- (id)routerCoordinator;
- (void)setBusinessTemplate:;
- (void)setRouterCoordinator:;
- (void).cxx_destruct;
- (id)inputData;
- (void)setInputData:;
+ (id)configurationWithBridgeParams:inputData:;
@end
