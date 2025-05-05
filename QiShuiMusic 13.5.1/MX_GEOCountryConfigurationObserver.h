@interface MX_GEOCountryConfigurationObserver : NSObject
- (id)init;
- (void)dealloc;
- (void)countryConfigurationDidChange:;
- (id)getCurrentCountryCode;
- (void)_updateCountryCodeFromCurrentGeoCountryConfiguration:;
@end
