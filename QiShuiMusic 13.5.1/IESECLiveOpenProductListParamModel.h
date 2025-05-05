@interface IESECLiveOpenProductListParamModel : IESLiveBridgeModel
@property (nonatomic) NSString couponId;
@property (nonatomic) NSString liveListChanel;
@property (nonatomic) NSString couponType;
@property (nonatomic) NSString couponCategory;
@property (nonatomic) NSString passThroughJson;
@property (nonatomic) NSString btm;
@property (nonatomic) NSDictionary bcm;
- (id)bcm;
- (id)btm;
- (id)passThroughJson;
- (void)setBcm:;
- (void)setBtm:;
- (id)couponCategory;
- (id)couponId;
- (id)couponType;
- (id)liveListChanel;
- (void)setCouponCategory:;
- (void)setCouponId:;
- (void)setCouponType:;
- (void)setLiveListChanel:;
- (void)setPassThroughJson:;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
@end
