@interface KeychainSyncDevicePINController : PSKeychainSyncTextEntryController
@property (nonatomic) UIKeyboard disabledKeyboard;
@property (nonatomic) NSString enterPasscodeTitle;
@property (nonatomic) NSString enterPasscodeReason;
- (id)specifiers;
- (id)init;
- (void)dealloc;
- (void)viewWillDisappear:;
- (void).cxx_destruct;
- (void)viewWillAppear:;
- (long long)tableView:titleAlignmentForFooterInSection:;
- (void)didFinishEnteringText:;
- (void)updateBlockedState:;
- (id)enterPasscodeTitle;
- (void)setEnterPasscodeTitle:;
- (id)enterPasscodeReason;
- (void)setEnterPasscodeReason:;
- (id)disabledKeyboard;
- (void)setDisabledKeyboard:;
@end
