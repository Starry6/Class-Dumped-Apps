@interface ICAgeVerifier : NSObject
@property (nonatomic) q status;
@property (nonatomic) BOOL explicitContentAllowed;
@property (nonatomic) NSDate verificationExpirationDate;
- (void)setStatus:;
- (void).cxx_destruct;
- (id)description;
- (long long)status;
- (BOOL)isExplicitContentAllowed;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithExpirationDate:;
- (void)runAgeVerification;
- (id)verificationExpirationDate;
@end
