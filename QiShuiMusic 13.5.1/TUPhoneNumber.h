@interface TUPhoneNumber : NSObject
@property (nonatomic) ^{__CFPhoneNumber=} phoneNumberRef;
@property (nonatomic) NSString digits;
@property (nonatomic) NSString countryCode;
@property (nonatomic) NSString formattedRepresentation;
@property (nonatomic) NSString formattedInternationalRepresentation;
@property (nonatomic) NSString unformattedInternationalRepresentation;
- (id)countryCode;
- (void)dealloc;
- (id)initWithCoder:;
- (id)formattedRepresentation;
- (void)encodeWithCoder:;
- (id)digits;
- (BOOL)isEqual:;
- (id)initWithDigits:countryCode:;
- (id)phoneNumberRef;
- (id)initWithCFPhoneNumberRef:;
- (id)formattedInternationalRepresentation;
- (id)unformattedInternationalRepresentation;
- (void)setPhoneNumberRef:;
+ (BOOL)supportsSecureCoding;
+ (id)phoneNumberWithDigits:countryCode:;
+ (id)phoneNumberWithCFPhoneNumberRef:;
+ (BOOL)areDigits:equalToDigits:usingCountryCode:;
@end
