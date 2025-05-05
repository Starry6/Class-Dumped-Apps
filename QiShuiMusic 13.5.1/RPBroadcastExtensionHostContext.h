@interface RPBroadcastExtensionHostContext : NSExtensionContext
@property (nonatomic) RPBroadcastHostViewController hostViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)hostViewController;
- (void)setHostViewController:;
- (id)extensionObjectProxy;
- (id)completeSetupWithBroadcastURL:;
- (id)updateBroadcastHandlerListenerEndpoint:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
