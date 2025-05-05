@interface CJPayPassKitBizRequestModel : NSObject
@property (nonatomic) NSString appID;
@property (nonatomic) NSString merchantID;
@property (nonatomic) NSString sessionKey;
@property (nonatomic) NSString uid;
@property (nonatomic) NSString mobile;
- (void)setSessionKey:;
- (id)uid;
- (void)setUid:;
- (void)setAppID:;
- (id)sessionKey;
- (id)appID;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)merchantID;
- (void)setMerchantID:;
- (id)mobile;
- (void)setMobile:;
@end
