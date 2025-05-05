@interface NEExtensionAppPushProviderContext : NEExtensionProviderContext
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)extensionPoint;
- (void)setProviderConfiguration:;
- (void)startConnectionWithProviderConfig:completionHandler:;
- (void)stopWithReason:completionHandler:;
- (void)reportIncomingCall:;
- (void)sendOutgoingCallMessage:completionHandler:;
- (void)sendTimerEvent;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
