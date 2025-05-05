@interface KeychainSyncSecurityCodeCell : PSEditableTableCell
@property (nonatomic) NSInteger securityCodeType;
@property (nonatomic) NSInteger mode;
@property (nonatomic) NSString firstPasscodeEntry;
- (BOOL)textFieldShouldBeginEditing:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (int)mode;
- (void)setMode:;
- (BOOL)textField:shouldChangeCharactersInRange:replacementString:;
- (void)setBulletText:;
- (int)securityCodeType;
- (void)setSecurityCodeType:;
- (id)firstPasscodeEntry;
- (void)setFirstPasscodeEntry:;
@end
