@interface KeychainSyncPhoneSettingsFragment : NSObject
@property (nonatomic) NSArray specifiers;
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) KeychainSyncCountryInfo countryInfo;
@property (nonatomic) PSEditableTableCell phoneNumberCell;
@property (nonatomic) <KeychainSyncPhoneSettingsFragmentDelegate> delegate;
@property (nonatomic) NSString title;
- (id)specifiers;
- (void)reloadSpecifiers;
- (void)dealloc;
- (id)phoneNumber;
- (void)setPhoneNumber:;
- (void)setDelegate:;
- (void)setTitle:;
- (id)title;
- (id)delegate;
- (void).cxx_destruct;
- (void)resignFirstResponder;
- (void)textFieldChanged:;
- (id)unformattedPhoneNumber;
- (void)setDialingCountryInfo:forSpecifier:;
- (id)dialingCountryInfoForSpecifier:;
- (void)setPhoneNumber:forSpecifier:;
- (id)phoneNumberForSpecifier:;
- (id)initWithListController:;
- (id)phoneNumberCell;
- (id)countryInfo;
- (void)setCountryInfo:;
@end
