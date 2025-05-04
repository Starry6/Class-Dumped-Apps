@interface AWEYapRPPromotionResponse : AWEBaseApiModel
@property (nonatomic) Q businessCode;
@property (nonatomic) NSString businessMsg;
@property (nonatomic) AWEYapRPPromotionInfo info;
@property (nonatomic) AWEIMDouyinRedPacketUserInfo user;
@property (nonatomic) q promotionStatus;
@property (nonatomic) NSString jumpUrl;
- (id)jumpUrl;
- (void)setJumpUrl:;
- (unsigned long long)businessCode;
- (id)businessMsg;
- (long long)promotionStatus;
- (void)setBusinessCode:;
- (void)setBusinessMsg:;
- (void)setPromotionStatus:;
- (id)user;
- (void)setUser:;
- (void)setInfo:;
- (id)info;
- (void).cxx_destruct;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)infoJSONTransformer;
@end
