@interface PSKeychainSyncPhoneNumber : NSObject
@property (nonatomic) NSString digits;
@property (nonatomic) KeychainSyncCountryInfo countryInfo;
- (id)digits;
- (void).cxx_destruct;
- (id)formattedString;
- (id)countryInfo;
- (void)setCountryInfo:;
- (id)_stringByAddingDialingPrefixToString:;
- (id)formattedStringWithDialingPrefix;
- (id)formattedAndObfuscatedString;
- (void)setDigits:;
+ (id)phoneNumberWithDigits:countryInfo:;
@end
