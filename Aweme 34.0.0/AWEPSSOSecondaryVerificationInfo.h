@interface AWEPSSOSecondaryVerificationInfo : NSObject
@property (nonatomic) NSString profileKey;
@property (nonatomic) NSString sharkTicket;
@property (nonatomic) NSNumber verifyType;
@property (nonatomic) NSString ticket;
@property (nonatomic) NSString verifyMobile;
@property (nonatomic) NSDictionary OAuthInfo;
- (id)paramsDictionary;
- (id)profileKey;
- (void)setProfileKey:;
- (id)OAuthInfo;
- (id)sharkTicket;
- (void)setSharkTicket:;
- (id)verifyMobile;
- (void)setVerifyMobile:;
- (void)setOAuthInfo:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setTicket:;
- (id)ticket;
- (void)setVerifyType:;
- (id)verifyType;
@end
