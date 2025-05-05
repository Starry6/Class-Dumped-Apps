@interface SFAccountTableViewCell : UITableViewCell
@property (nonatomic) WBSSavedAccount savedAccount;
@property (nonatomic) NSString searchPattern;
@property (nonatomic) BOOL isIconMonogram;
@property (nonatomic) <SFAccountTableViewCellDelegate> delegate;
@property (nonatomic) BOOL safari_hasOneTimeCodeGenerator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithStyle:reuseIdentifier:;
- (void)setDelegate:;
- (id)delegate;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)savedAccount;
- (id)searchPattern;
- (void)showPlaceholderImageForDomain:backgroundColor:;
- (void)setSavedAccount:searchPattern:emphasizeUserName:;
- (void)setSavedAccount:withWarnings:savedAccountIsOnlySavedAccountForHighLevelDomain:;
- (void)safari_copyUserName;
- (void)safari_copyPassword;
- (BOOL)safari_hasOneTimeCodeGenerator;
- (void)safari_copyOneTimeCode;
- (BOOL)isIconMonogram;
- (void)_updateAccessibilityIdentifiers;
@end
