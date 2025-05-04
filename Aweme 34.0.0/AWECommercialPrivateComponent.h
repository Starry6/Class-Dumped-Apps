@interface AWECommercialPrivateComponent : AWEUserHomeBaseComponent
@property (nonatomic) NSString activityId;
@property (nonatomic) NSString merchantUid;
@property (nonatomic) NSString extraInfo;
@property (nonatomic) NSString materialId;
@property (nonatomic) NSString playType;
@property (nonatomic) NSDictionary paramDict;
- (void)setPlayType:;
- (id)paramDict;
- (void)setParamDict:;
- (BOOL)isCraftsmanScene;
- (BOOL)onConfigWithRouterParamDict:;
- (void)setMerchantUid:;
- (id)merchantUid;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)activityId;
- (void)setActivityId:;
- (id)materialId;
- (void)setMaterialId:;
- (id)extraInfo;
- (id)playType;
- (void)setExtraInfo:;
@end
