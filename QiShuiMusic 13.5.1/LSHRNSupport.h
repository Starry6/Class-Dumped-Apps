@interface LSHRNSupport : NSObject
+ (void)invalidateCache;
+ (BOOL)deviceConfiguredForHRN;
+ (void)setActivationRecordOverride:;
+ (void)setActivationRecordOverrideNil;
+ (void)setFeatureFlagOverride:;
+ (id)vendorIDFromVendorName:seedData:error:;
@end
