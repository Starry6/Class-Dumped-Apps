@interface SOExtensionFinder : NSObject
- (id)init;
- (void)findExtensionsWithCompletion:;
- (void)findExtensionWithBundleIdentifier:completion:;
- (void).cxx_destruct;
- (void)endMatchingExtensions;
- (id)_soExtensionsForExtensions:;
- (void)beginMatchingExtensionsWithCompletion:;
@end
