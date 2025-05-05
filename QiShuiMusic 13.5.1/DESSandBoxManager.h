@interface DESSandBoxManager : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithExtensions:;
- (BOOL)consumeExtensionsWithError:;
- (void)releaseExtensions;
+ (id)sandboxExtensionsToXPCConnection:fileURLs:requireWrite:outError:;
@end
