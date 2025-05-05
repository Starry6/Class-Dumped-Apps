@interface KeychainSyncPhoneNumberController : PSKeychainSyncViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)specifiers;
- (void)reloadSpecifiers;
- (void)viewWillDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)nextPressed;
- (void)phoneSettingsFragment:didChangePhoneNumber:countryInfo:;
- (void)controllerDone;
@end
