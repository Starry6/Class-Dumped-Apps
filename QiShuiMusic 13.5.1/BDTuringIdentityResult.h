@interface BDTuringIdentityResult : BDTuringVerifyResult
@property (nonatomic) q identityAuthCode;
@property (nonatomic) q livingDetectCode;
@property (nonatomic) q serverCode;
@property (nonatomic) NSString message;
@property (nonatomic) NSString ticket;
- (long long)identityAuthCode;
- (long long)livingDetectCode;
- (long long)serverCode;
- (void)setIdentityAuthCode:;
- (void)setLivingDetectCode:;
- (void)setServerCode:;
- (void)setMessage:;
- (id)message;
- (void).cxx_destruct;
- (id)ticket;
- (void)setTicket:;
+ (id)unsupportResult;
+ (id)conflictResult;
+ (id)identyErrorResult;
+ (id)identyOKResult;
@end
