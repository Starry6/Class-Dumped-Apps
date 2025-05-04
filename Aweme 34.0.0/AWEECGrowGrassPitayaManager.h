@interface AWEECGrowGrassPitayaManager : NSObject
@property (nonatomic) NSMutableArray handlers;
@property (nonatomic) AWEJumpToMallBasicObject basicInfo;
- (id)basicInfo;
- (void)registerNotification;
- (void)setBasicInfo:;
- (void)registerPitayaMessageHandler;
- (void)runPitayaWithBussinessName:params:callback:;
- (void)getLeafProductsInfoWithProductIds:completion:;
- (void)onCommentAddNotification:;
- (void)storeLastGrowGrassInfoWithType:awemeID:;
- (void)storeCommentToPitaya:isPurchaseIntention:;
- (void)checkIsPurchaseComment:completion:;
- (void)runPitayaTaskWithComment:;
- (BOOL)checkIsImageVideoWithModel:;
- (void)identifyImageGrowGrass;
- (id)handlers;
- (id)init;
- (void)setHandlers:;
- (void).cxx_destruct;
- (void)addHandler:;
@end
