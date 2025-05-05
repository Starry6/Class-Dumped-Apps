@interface CNPostalAddressFormatter : NSFormatter
@property (nonatomic) q style;
- (id)stringForObjectValue:;
- (void)setStyle:;
- (long long)style;
- (id)attributedStringForObjectValue:withDefaultAttributes:;
- (id)stringFromPostalAddress:;
- (id)attributedStringFromPostalAddress:withDefaultAttributes:;
- (id)attributedStringFromPostalAddress:name:organization:attributes:;
- (id)postalAddressFromString:;
+ (id)singleLineStringFromPostalAddress:addCountryName:;
+ (id)stringFromPostalAddress:style:;
+ (id)localizedCountryNameForISOCountryCode:;
+ (id)formatPropertyKeyForPostalAddressPropertyKey:;
+ (id)specificationForCountry:;
+ (id)attributedStringFromPostalAddress:style:withDefaultAttributes:;
+ (id)postalAddressPropertyKeyForFormatPropertyKey:;
+ (id)specificationWithAddressFormatPlist:;
+ (id)localizedStringForPostalAddressString:;
+ (id)supportedCountries;
@end
