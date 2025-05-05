@interface BDAppJumpPrivacyCertEntry : BDPrivacyCertEntry
+ (id)initSKStoreWithCert:error:;
+ (BOOL)openURL:withCert:error:;
+ (void)openURL:withCert:options:completionHandler:;
@end
