@interface AWEEcomSearchSuspensionModel : NSObject
@property (nonatomic) AWESearchFeelGoodModel feelGoodModel;
@property (nonatomic) NSArray pushTimeFeedOutLynxModel;
@property (nonatomic) AWEDoubleColumnSearchActivityModel activityContainer;
@property (nonatomic) AWESearchGlobalCartModel shoppingCart;
@property (nonatomic) NSString pendantParamsJSONStr;
@property (nonatomic) AWEEcomSearchCartContainerModel cartContainer;
- (id)feelGoodModel;
- (void)setFeelGoodModel:;
- (id)pushTimeFeedOutLynxModel;
- (void)setPushTimeFeedOutLynxModel:;
- (id)shoppingCart;
- (void)setShoppingCart:;
- (id)activityContainer;
- (id)cartContainer;
- (void)setActivityContainer:;
- (id)pendantParamsJSONStr;
- (void)setPendantParamsJSONStr:;
- (void)setCartContainer:;
- (void).cxx_destruct;
@end
