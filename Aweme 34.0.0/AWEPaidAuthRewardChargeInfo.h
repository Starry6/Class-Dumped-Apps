@interface AWEPaidAuthRewardChargeInfo : NSObject
@property (nonatomic) NSString adAwardKey;
@property (nonatomic) NSArray IAAAwardInfos;
@property (nonatomic) AWEPaidStreamIAAUIConfig awardUIConfig;
- (id)adAwardKey;
- (void)setAdAwardKey:;
- (id)IAAAwardInfos;
- (void)setIAAAwardInfos:;
- (id)awardUIConfig;
- (void)setAwardUIConfig:;
- (void).cxx_destruct;
@end
