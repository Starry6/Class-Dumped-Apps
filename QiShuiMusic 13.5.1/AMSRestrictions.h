@interface AMSRestrictions : NSObject
+ (BOOL)explicitContentAllowed;
+ (BOOL)isParentalControlEnabled;
+ (BOOL)allowAccountModifications;
+ (long long)maximumMediaRank;
+ (BOOL)allowActiveAccountModifications;
+ (id)rankForMediaType:;
+ (BOOL)eroticaAllowed;
+ (BOOL)requirePasswordImmediately;
+ (BOOL)onDeviceDiagnosticsAllowed;
+ (BOOL)inAppPurchaseAllowed;
+ (id)_featureNameForMediaType:;
@end
