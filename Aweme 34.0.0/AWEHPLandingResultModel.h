@interface AWEHPLandingResultModel : MTLModel
@property (nonatomic) BOOL isDefault;
@property (nonatomic) NSString userId;
@property (nonatomic) q landingCount;
@property (nonatomic) q serverTime;
@property (nonatomic) AWEHPLandingPitayaResultModel pitaya;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setServerTime:;
- (void)setLandingCount:;
- (void)setPitaya:;
- (long long)landingCount;
- (id)pitaya;
- (BOOL)isValidWithError:;
- (id)userId;
- (BOOL)isDefault;
- (void)setIsDefault:;
- (long long)serverTime;
- (id)description;
- (void).cxx_destruct;
- (void)setUserId:;
- (id)getRawData;
+ (id)generateResultModelWithRawData:error:;
+ (id)JSONKeyPathsByPropertyKey;
@end
