@interface KeychainSyncSMSVerificationController : PSKeychainSyncTextEntryController
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) NSString dialingPrefix;
@property (nonatomic) NSString countryCode;
@property (nonatomic) PSKeychainSyncManager keychainSyncManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)specifiers;
- (void)setCountryCode:;
- (id)countryCode;
- (id)init;
- (id)phoneNumber;
- (void)setPhoneNumber:;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (id)dialingPrefix;
- (void)setDialingPrefix:;
- (void)dismissAlerts;
- (void)showSupportVerification;
- (id)keychainSyncManager;
- (void)setKeychainSyncManager:;
@end
