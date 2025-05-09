@interface AWECodeGenDouyinContentPayChargePermissionResponse : AWEBaseResponseModel
@property (nonatomic) BOOL entrance;
@property (nonatomic) NSInteger create;
@property (nonatomic) NSArray permissionInfosModelArray;
@property (nonatomic) NSString gifGuideUrl;
@property (nonatomic) NSInteger gifGuideShowTimes;
@property (nonatomic) NSString paidAgreementSchema;
@property (nonatomic) NSInteger topTipsShowTimes;
@property (nonatomic) q minChargeVideoDuration;
@property (nonatomic) BOOL limitFree;
@property (nonatomic) BOOL trialChange;
- (void)setEntrance:;
- (BOOL)entrance;
- (id)permissionInfosModelArray;
- (void)setPermissionInfosModelArray:;
- (id)gifGuideUrl;
- (void)setGifGuideUrl:;
- (int)gifGuideShowTimes;
- (void)setGifGuideShowTimes:;
- (id)paidAgreementSchema;
- (void)setPaidAgreementSchema:;
- (int)topTipsShowTimes;
- (void)setTopTipsShowTimes:;
- (long long)minChargeVideoDuration;
- (void)setMinChargeVideoDuration:;
- (BOOL)trialChange;
- (void)setTrialChange:;
- (int)create;
- (void).cxx_destruct;
- (void)setCreate:;
- (BOOL)limitFree;
- (void)setLimitFree:;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
