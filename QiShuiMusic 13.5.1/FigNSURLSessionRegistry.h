@interface FigNSURLSessionRegistry : NSObject
- (id)init;
- (void)dealloc;
- (void)releaseSession:;
- (void)_checkForDoom:;
- (void)copySessionAndAssertionForClientBundleIdentifier:clientPersonaIdentifier:dispatchQueue:outSession:outAssertion:;
@end
