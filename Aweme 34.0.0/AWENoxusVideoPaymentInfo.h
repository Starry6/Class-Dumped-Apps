@interface AWENoxusVideoPaymentInfo : AWEBaseApiModel
@property (nonatomic) NSString expireTimeString;
@property (nonatomic) Q payType;
@property (nonatomic) BOOL payStatus;
@property (nonatomic) q expireTime;
- (void)setPayStatus:;
- (BOOL)payStatus;
- (unsigned long long)payType;
- (void)setPayType:;
- (id)expireTimeString;
- (void)setExpireTimeString:;
- (void).cxx_destruct;
- (long long)expireTime;
- (void)setExpireTime:;
+ (id)JSONKeyPathsByPropertyKey;
@end
