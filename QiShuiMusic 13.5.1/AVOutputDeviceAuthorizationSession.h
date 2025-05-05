@interface AVOutputDeviceAuthorizationSession : NSObject
@property (nonatomic) <AVOutputDeviceAuthorizationSessionDelegate> delegate;
- (void)dealloc;
- (void)setDelegate:;
- (BOOL)outputDeviceAuthorizationSessionImpl:shouldRetryAuthorizationRequest:reason:;
- (id)initWithOutputDeviceAuthorizationSessionImpl:;
- (id)delegate;
- (id)impl;
- (void)outputDeviceAuthorizationSessionImpl:didProvideAuthorizationRequest:;
- (void)outputDeviceAuthorizationSessionImplDidExpireWithReplacementImpl:;
+ (id)sharedAuthorizationSession;
+ (id)outputDeviceAuthorizationSessionWithEndpointUIAgent:;
@end
