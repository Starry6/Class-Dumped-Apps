@interface AWEIMDouyinRedPacketInfoResponse : AWEBaseApiModel
@property (nonatomic) AWEIMDouyinRedPacketModel info;
@property (nonatomic) AWEIMDouyinRedPacketUserInfo user;
@property (nonatomic) Q businessCode;
@property (nonatomic) NSString businessMsg;
@property (nonatomic) BOOL isOpenedRedpacket;
@property (nonatomic) BOOL isPromotionShareEnded;
- (unsigned long long)businessCode;
- (id)businessMsg;
- (void)setIsOpenedRedpacket:;
- (BOOL)isOpenedRedpacket;
- (void)setBusinessCode:;
- (void)setBusinessMsg:;
- (BOOL)isPromotionShareEnded;
- (void)setIsPromotionShareEnded:;
- (id)user;
- (void)setUser:;
- (void)setInfo:;
- (id)info;
- (void).cxx_destruct;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)infoJSONTransformer;
@end
