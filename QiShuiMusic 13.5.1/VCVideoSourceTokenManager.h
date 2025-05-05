@interface VCVideoSourceTokenManager : NSObject
- (id)init;
- (void)dealloc;
- (id)createtokenForDeviceName:sourceType:;
- (id)tokenForDeviceName:sourceType:;
- (id)deviceNameForToken:;
+ (id)sharedManager;
@end
