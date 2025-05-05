@interface AAGrandSlamSigner : NSObject
@property (nonatomic) ACAccount grandSlamAccount;
@property (nonatomic) ACAccountStore accountStore;
@property (nonatomic) BOOL useAltDSID;
@property (nonatomic) NSString headerFieldKey;
- (id)accountStore;
- (id)grandSlamAccount;
- (void)setHeaderFieldKey:;
- (id)initWithAccountStore:grandSlamAccount:appTokenID:;
- (id)headerFieldKey;
- (void)setUseAltDSID:;
- (void).cxx_destruct;
- (BOOL)signURLRequest:;
- (BOOL)signURLRequest:isUserInitiated:;
- (id)initWithAppleAccount:grandSlamAccount:accountStore:appTokenID:;
- (BOOL)useAltDSID;
@end
