@interface AWECertificationModel : AWEBaseApiModel
@property (nonatomic) q bracket;
@property (nonatomic) BOOL needGuardianVerify;
@property (nonatomic) NSNumber verifyts;
@property (nonatomic) BOOL isVerified;
- (long long)bracket;
- (void)setBracket:;
- (BOOL)needGuardianVerify;
- (void)setNeedGuardianVerify:;
- (id)verifyts;
- (void)setVerifyts:;
- (void).cxx_destruct;
- (BOOL)isVerified;
- (void)setIsVerified:;
+ (id)JSONKeyPathsByPropertyKey;
@end
