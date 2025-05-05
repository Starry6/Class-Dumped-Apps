@interface INSystemAppMapper : NSObject
- (id)resolvedAppMatchingExtensionBundleIdentifier:;
- (id)init;
- (id)resolvedIntentForAccessibilityActionWithBundleIdentifier:intentClassName:;
- (id)resolvedIntentMatchingExtensionBundleIdentifier:preferredCallProvider:intentClassName:;
- (id)extensionToLaunchableAppBundleIdentifierMapping;
- (id)resolvedIntentMatchingAppBundleIdentifier:preferredCallProvider:intentClassName:;
- (void).cxx_destruct;
- (id)extensionToDisplayableAppBundleIdentifierMapping;
- (id)matchForBundleIdentifier:;
- (id).cxx_construct;
- (id)bundleIdentifiersForIntentExecutionMatchingBundleIdentifier:;
+ (id)sharedMapper;
+ (id)supportedIntentsOverridesForBundleIdentifier:;
@end
