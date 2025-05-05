@interface INSystemAppMatch : NSObject
@property (nonatomic) NSString iOSBundleIdentifier;
@property (nonatomic) NSString macOSBundleIdentifier;
@property (nonatomic) NSString watchOSBundleIdentifier;
@property (nonatomic) NSString bundleIdentifierForCurrentPlatform;
@property (nonatomic) BOOL appIsUnavailableOnCurrentPlatform;
- (id)bundleIdentifierForCurrentPlatform;
- (id)macOSBundleIdentifier;
- (BOOL)appIsUnavailableOnCurrentPlatform;
- (id)watchOSBundleIdentifier;
- (void).cxx_destruct;
- (id)iOSBundleIdentifier;
- (id)initWithiOSBundleIdentifier:macOSBundleIdentifier:watchOSBundleIdentifier:;
+ (id)matchWithiOSBundleIdentifier:macOSBundleIdentifier:watchOSBundleIdentifier:;
@end
