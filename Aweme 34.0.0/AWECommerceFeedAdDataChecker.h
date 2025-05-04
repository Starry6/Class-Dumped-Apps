@interface AWECommerceFeedAdDataChecker : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) <AWECommerceComponentContext> commerceContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)commerceContext;
- (void)setCommerceContext:;
- (void)checkFeedPlayableDataWithAweme:;
- (void)checkMannorData;
- (void)checkLokiData;
- (void)checkLynxCardData;
- (void)checkCardInfosData;
- (void)checkCommerceConfigData;
- (void)checkActivityPendantData;
- (void)checkNakedEye3DData;
- (void)checkLabelData;
- (void)checkAnchorData;
- (void)trackWithScene:extraParams:;
- (void)checkFullScreenContainerData:;
- (void)checkNormalLokiData:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
+ (BOOL)canShowComponentWithContext:;
+ (BOOL)canDetect;
@end
