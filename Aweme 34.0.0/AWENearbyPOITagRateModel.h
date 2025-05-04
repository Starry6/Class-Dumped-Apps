@interface AWENearbyPOITagRateModel : AWEBaseApiModel
@property (nonatomic) NSString rateId;
@property (nonatomic) NSString rateContent;
@property (nonatomic) AWEPOISimpleUserInfo userInfo;
- (id)rateId;
- (void)setRateId:;
- (id)rateContent;
- (void)setRateContent:;
- (void)setUserInfo:;
- (id)userInfo;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
