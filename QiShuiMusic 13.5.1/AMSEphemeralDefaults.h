@interface AMSEphemeralDefaults : NSObject
+ (void)_accessDataStoreUsingBlock:;
+ (long long)HARLoggingItemLimit;
+ (void)setProcessAssertionsEnabled:;
+ (void)setPreferEphemeralImageLoader:;
+ (BOOL)HARLoggingEnabled;
+ (void)setHARLoggingItemLimit:;
+ (BOOL)processAssertionsEnabled;
+ (id)_propertyForKey:defaultValue:expectedType:;
+ (void)setBagKeyRegistrationEnabled:;
+ (BOOL)suppressEngagement;
+ (void)setPurchaseAccountFallback:;
+ (void)setHARLoggingEnabled:;
+ (void)setPreferEphemeralURLSessions:;
+ (BOOL)preferEphemeralURLSessions;
+ (void)_setProperty:forKey:;
+ (BOOL)bagKeyRegistrationEnabled;
+ (BOOL)preferEphemeralImageLoader;
+ (void)setSuppressEngagement:;
+ (BOOL)purchaseAccountFallback;
@end
