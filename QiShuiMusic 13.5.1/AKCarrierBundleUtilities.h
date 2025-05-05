@interface AKCarrierBundleUtilities : NSObject
- (id)init;
- (id)phoneBundleInfoWithAdditionalInfo:error:;
- (void).cxx_destruct;
- (id)_formattedValueForPhoneNumber:countryCode:;
+ (id)sharedInstance;
@end
