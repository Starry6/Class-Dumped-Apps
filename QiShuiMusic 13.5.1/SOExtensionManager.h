@interface SOExtensionManager : NSObject
@property (nonatomic) NSArray loadedExtensions;
- (id)init;
- (void)unloadExtensions;
- (void)dealloc;
- (id)_doLoadExtensions;
- (BOOL)isLoadedExtensionWithBundleIdentifer:;
- (id)loadedExtensionWithBundleIdentifer:;
- (id)loadExtensionWithBundleIdentifier:;
- (void)loadExtensionWithBundleIdentifer:completion:;
- (void)beginMatchingExtensions;
- (id)loadedInternalExtension;
- (void).cxx_destruct;
- (void)endMatchingExtensions;
- (void)_doBeginMatchingExtensions;
- (id)loadInternalExtension;
- (id)loadedExtensions;
- (void)loadExtensions;
- (void)_doEndMatchingExtensions;
+ (id)sharedInstance;
+ (BOOL)isAppleConnectExtensionBundleIdentifier:;
+ (id)internalExtensionBundleIdentifier;
+ (BOOL)_isMatchedExtension:forBundleIdentifier:;
+ (void)_sendNotificationsLoadedExtensions:new:removed:;
+ (BOOL)isInternalExtensionBundleIdentifier:;
+ (BOOL)isTiburonExtensionBundleIdentifier:;
+ (id)internalExtensionsBundleIdentifiers;
@end
