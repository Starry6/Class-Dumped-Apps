@interface STCity : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)_initWithName:unlocalizedName:countryName:unlocalizedCountryName:timeZone:latitude:longitude:alCityID:;
- (id)alCityValue;
+ (BOOL)supportsSecureCoding;
@end
