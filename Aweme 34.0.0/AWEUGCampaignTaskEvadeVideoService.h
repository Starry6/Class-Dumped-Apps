@interface AWEUGCampaignTaskEvadeVideoService : NSObject
@property (nonatomic) AWECampaignWatchTaskModel watchModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackLogWithKey:message:;
- (void)setWatchModel:;
- (id)watchModel;
- (BOOL)checkAwemeIfNeedEvade:type:;
- (BOOL)checkAwemeIsGov:;
- (BOOL)checkAwemeIsGlobalAvoidPendant:;
- (BOOL)checkAwemeIsAllAD:;
- (BOOL)checkAwemeIsAD_CPC:;
- (BOOL)checkAwemeIsAD_DOUPlus:;
- (BOOL)checkAwemeIsAD_Other:;
- (BOOL)checkAwemeIsRecommendUser:;
- (BOOL)checkAwemeIsHotSpot:;
- (BOOL)checkAweme:type:;
- (id)awemeTypeDic;
- (BOOL)needEvadeFromVideo:;
- (void).cxx_destruct;
@end
