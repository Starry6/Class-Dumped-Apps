@interface CTPhoneNumber : NSObject
@property (nonatomic) NSString digits;
@property (nonatomic) NSString countryCode;
@property (nonatomic) BOOL isShortCode;
- (id)countryCode;
- (id)digits;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)canonicalFormat;
- (id)encodedString;
- (long long)numberOfDigitsForShortCodeNumber;
- (long long)numberOfDigitsForShortCodeNumber:;
- (id)initWithDigits:digits:countryCode:;
- (id)initWithDigits:countryCode:;
- (id)formatForCallingCountry:;
- (BOOL)isShortCode;
- (void)setIsShortCode:;
+ (id)phoneNumberWithDigits:countryCode:;
+ (id)phoneNumberWithDigits:digits:countryCode:;
+ (BOOL)isValidPhoneNumberChar:;
+ (BOOL)isValidPhoneNumber:;
@end
