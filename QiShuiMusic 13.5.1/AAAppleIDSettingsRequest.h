@interface AAAppleIDSettingsRequest : AARequest
@property (nonatomic) ACAccount grandSlamAccount;
@property (nonatomic) BOOL forceGSToken;
- (id)grandSlamAccount;
- (id)urlRequest;
- (BOOL)forceGSToken;
- (void).cxx_destruct;
- (id)initWithGrandSlamAccount:accountStore:;
- (void)setForceGSToken:;
+ (Class)responseClass;
@end
