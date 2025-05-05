@interface CXCallDirectorySanitizer : NSObject
@property (nonatomic) NSCharacterSet phoneNumbersCharacterSet;
@property (nonatomic) NSCharacterSet nonPhoneNumbersCharacterSet;
@property (nonatomic) NSCharacterSet phoneNumbersIgnoredCharacterSet;
- (id)init;
- (id)phoneNumbersIgnoredCharacterSet;
- (void).cxx_destruct;
- (id)nonPhoneNumbersCharacterSet;
- (id)canonicalizedPhoneNumber:;
- (id)phoneNumbersCharacterSet;
@end
