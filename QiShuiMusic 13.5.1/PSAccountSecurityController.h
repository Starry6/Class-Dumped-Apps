@interface PSAccountSecurityController : PSListController
@property (nonatomic) NSInteger securityCodeType;
@property (nonatomic) NSString securityCode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)specifiers;
- (void)reloadSpecifiers;
- (id)init;
- (void)viewWillDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)securityCode;
- (void)setSecurityCode:;
- (void)cancelPressed;
- (int)securityCodeType;
- (void)setSecurityCodeType:;
- (void)keychainSyncController:didFinishWithResult:error:;
- (void)phoneSettingsFragment:didChangePhoneNumber:countryInfo:;
- (void)changeSecurityCode:;
- (void)setUseRecovery:specifier:;
- (id)useRecoveryForSepecifier:;
- (void)navCancelPressed;
- (void)navDonePressed;
- (id)passcodeSpecifiers;
- (void)_showSecurityCodeChangeSheetOnSpecifier:;
- (void)disableRecovery;
- (void)handleBurnedRecord;
- (void)saveSMSTargetChanges;
- (void)_setShowsDoneButton:;
@end
