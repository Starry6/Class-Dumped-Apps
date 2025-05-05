@interface ENRegion : NSObject
@property (nonatomic) NSString countryCode;
@property (nonatomic) NSString subdivisionCode;
@property (nonatomic) NSString regionCode;
- (id)regionCode;
- (id)countryCode;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (BOOL)validSubdivisionCode;
- (BOOL)isSubdivisionCodeEqualToRegion:;
- (id)initWithCountryCode:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isCountryCodeEqualToRegion:;
- (id)initWithCountryCode:subdivisionCode:;
- (id)subdivisionCode;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)regionWithCode:;
+ (id)regionFromServerResponseDictionary:;
+ (BOOL)validSubdivisionCode:forCountryCode:;
@end
