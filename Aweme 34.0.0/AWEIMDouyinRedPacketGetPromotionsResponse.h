@interface AWEIMDouyinRedPacketGetPromotionsResponse : AWEBaseApiModel
@property (nonatomic) Q businessCode;
@property (nonatomic) NSString businessMsg;
@property (nonatomic) NSString promotionsInfo;
@property (nonatomic) NSString promotionsInfoBackUp;
@property (nonatomic) q promotionsAmount;
@property (nonatomic) NSString btnTitle;
@property (nonatomic) NSString orderID;
- (id)orderID;
- (void)setOrderID:;
- (unsigned long long)businessCode;
- (id)businessMsg;
- (id)btnTitle;
- (void)setBtnTitle:;
- (void)setBusinessCode:;
- (void)setBusinessMsg:;
- (id)promotionsInfo;
- (void)setPromotionsInfo:;
- (id)promotionsInfoBackUp;
- (void)setPromotionsInfoBackUp:;
- (long long)promotionsAmount;
- (void)setPromotionsAmount:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
