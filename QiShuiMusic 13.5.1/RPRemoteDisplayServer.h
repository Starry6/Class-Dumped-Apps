@interface RPRemoteDisplayServer : NSObject
@property (nonatomic) I internalAuthFlags;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? interruptionHandler;
@property (nonatomic) @? invalidationHandler;
@property (nonatomic) @? sessionStartHandler;
@property (nonatomic) @? sessionEndedHandler;
@property (nonatomic) NSArray allowedMACAddresses;
@property (nonatomic) NSArray pairSetupACL;
@property (nonatomic) I pairSetupFlags;
@property (nonatomic) I pairVerifyFlags;
@property (nonatomic) NSString password;
@property (nonatomic) NSInteger passwordType;
@property (nonatomic) NSInteger passwordTypeActual;
@property (nonatomic) @? authCompletionHandler;
@property (nonatomic) @? showPasswordHandler;
@property (nonatomic) @? hidePasswordHandler;
@property (nonatomic) @? promptForPasswordHandler;
- (id)pairSetupACL;
- (unsigned int)pairVerifyFlags;
- (unsigned int)internalAuthFlags;
- (int)passwordTypeActual;
- (void)setPassword:;
- (id)init;
- (void)setPairVerifyFlags:;
- (id)password;
- (id)interruptionHandler;
- (void)setPromptForPasswordHandler:;
- (id)allowedMACAddresses;
- (void)_invalidated;
- (void)setPairSetupACL:;
- (void)setInterruptionHandler:;
- (void)setAllowedMACAddresses:;
- (int)passwordType;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (id)initWithCoder:;
- (id)showPasswordHandler;
- (void)_interrupted;
- (id)authCompletionHandler;
- (void)_ensureXPCStarted;
- (void)activateWithCompletion:;
- (void)encodeWithCoder:;
- (id)promptForPasswordHandler;
- (void)setPairSetupFlags:;
- (id)sessionEndedHandler;
- (void)setSessionEndedHandler:;
- (void).cxx_destruct;
- (void)setAuthCompletionHandler:;
- (void)setPasswordType:;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (id)description;
- (id)hidePasswordHandler;
- (unsigned int)pairSetupFlags;
- (void)invalidate;
- (void)tryPassword:;
- (void)setHidePasswordHandler:;
- (void)setShowPasswordHandler:;
- (void)_activateWithCompletion:reactivate:;
- (id)sessionStartHandler;
- (void)setSessionStartHandler:;
- (void)remoteDisplayShowPassword:flags:;
- (void)remoteDisplayHidePasswordWithFlags:;
- (void)remoteDisplayStartServerSessionID:device:completion:;
- (void)remoteDisplaySessionEndedWithID:;
- (void)remoteDisplayReceivedEventID:event:options:sessionID:;
- (void)remoteDisplayReceivedRequestID:request:options:responseHandler:sessionID:;
+ (BOOL)supportsSecureCoding;
@end
