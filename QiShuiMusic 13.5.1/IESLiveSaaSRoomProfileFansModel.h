@interface IESLiveSaaSRoomProfileFansModel : NSObject
@property (nonatomic) FansclubMeResult_Data originData;
@property (nonatomic) BOOL modelAfterFollow;
@property (nonatomic) FansclubMeResult_Data vsOriginData;
- (id)fansLevel;
- (id)fansStatus;
- (BOOL)isFans;
- (BOOL)isFansclubActive;
- (BOOL)modelAfterFollow;
- (id)originData;
- (id)participateUrgeAwardUnit;
- (id)participateUrgeCoinCount;
- (void)setModelAfterFollow:;
- (void)setOriginData:;
- (void)setVsOriginData:;
- (void)updateWithMessage:;
- (id)vsOriginData;
- (void).cxx_destruct;
+ (id)fansModelWithOriginData:;
+ (id)fansModelWithOriginData:afterFollow:;
+ (id)fansModelWithVSOriginData:;
@end
