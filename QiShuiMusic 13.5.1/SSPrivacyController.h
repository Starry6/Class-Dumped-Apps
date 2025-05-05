@interface SSPrivacyController : NSObject
+ (id)_syncPrivacyAcknowledgementOnAccount:URL:;
+ (BOOL)shouldDisplayPrivacyLinkWithIdentifier:;
+ (void)acknowledgePrivacyLinkWithIdentifier:URL:;
+ (id)_appendPrivacyAcknowledgementToActiveAccount:withURL:;
+ (void)_appendPrivacyAcknowledgement:toAccount:;
+ (unsigned long long)_currentPrivacyContentVersionForIdentifier:;
+ (id)storePrivacyIdentifiers;
+ (void)acknowledgePrivacyLinkWithIdentifier:;
+ (id)viewControllerForPrivacySplashWithIdentifier:URL:;
+ (id)_translateIdentifierToPrivacyAcknowledgement:withVersion:;
+ (id)appStorePrivacyIdentifiers;
+ (void)_appendPrivacyAcknowledgementToLocalAccount:;
+ (void)syncPrivacyAcknowledgementOnAccount:URL:;
@end
