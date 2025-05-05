@interface INIntentExecutionInfo : INExecutionInfo
@property (nonatomic) NSString intentClassName;
@property (nonatomic) q preferredCallProvider;
@property (nonatomic) NSString uiExtensionBundleId;
@property (nonatomic) BOOL hasCustomUIExtension;
- (void).cxx_destruct;
- (id)intentClassName;
- (id)initWithIntent:;
- (BOOL)canRunOnLocalDevice;
- (long long)preferredCallProvider;
- (id)initWithIntentTypeName:;
- (id)initWithIntentClassName:launchableAppBundleId:;
- (id)initWithIntentClassName:extensionBundleId:;
- (id)_initWithIntentClassName:preferredCallProvider:launchableAppBundleId:displayableAppBundleId:extensionBundleId:uiExtensionBundleId:containingAppBundleURL:;
- (BOOL)hasCustomUIExtension;
- (id)_matchingAttributesForExtensionPoint:error:;
- (id)_extensionsWithError:;
- (id)_uiExtensionsWithError:;
- (id)uiExtensionBundleId;
@end
