@interface KeychainSyncCountryInfo : NSObject
@property (nonatomic) NSString countryCode;
@property (nonatomic) NSString countryName;
@property (nonatomic) NSString dialingPrefix;
@property (nonatomic) NSString localizedCountryName;
- (void)setCountryCode:;
- (id)countryCode;
- (id)countryName;
- (void)setCountryName:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)localizedCountryName;
- (void)setLocalizedCountryName:;
- (id)dialingPrefix;
- (void)setDialingPrefix:;
+ (void)_loadCountriesIfNeeded;
+ (id)allCountries;
+ (id)countryInfoWithDictionary:;
+ (id)countryInfoForCountryCode:dialingPrefix:;
@end
