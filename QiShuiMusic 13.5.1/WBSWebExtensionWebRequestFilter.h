@interface WBSWebExtensionWebRequestFilter : NSObject
- (void).cxx_destruct;
- (id)initWithDictionary:outErrorMessage:;
- (id)_initializeWithDictionary:;
- (BOOL)matchesRequestForResourceOfType:URL:tabID:windowID:;
@end
