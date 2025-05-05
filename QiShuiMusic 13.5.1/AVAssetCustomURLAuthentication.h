@interface AVAssetCustomURLAuthentication : NSObject
- (id)initWithFigAsset:;
- (void)dealloc;
- (int)_handleAuthChallenge:requestID:canHandleRequestOut:;
+ (id)copyKeychainCredentialForUrl:;
+ (int)sendAuthResponse:requestID:disposition:credential:authHandler:;
@end
