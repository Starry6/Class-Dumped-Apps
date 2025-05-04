@interface AWEPaidStreamSecurity : NSObject
@property (nonatomic) NSHashTable securityEventHandlers;
@property (nonatomic) AWEBinding screenCaptureBinding;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWEPaidSecurityDelegate> delegate;
- (BOOL)inScreenCaptured;
- (void)sendEventScreenCapturedDidChange:;
- (void)registerSecurityEventHandler:;
- (void)uninstallSecurity;
- (void)unregisterSecurityEventHandler:;
- (void)installSecurity;
- (void)sendEventToHandlers:event:;
- (id)registeredSecurityEventHandlers;
- (id)securityEventHandlers;
- (void)setScreenCaptureBinding:;
- (id)screenCaptureBinding;
- (BOOL)isScreenCaptured;
- (BOOL)verifyScreenCaptured;
- (void)setSecurityEventHandlers:;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
