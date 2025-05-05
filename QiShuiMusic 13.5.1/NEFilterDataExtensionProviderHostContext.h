@interface NEFilterDataExtensionProviderHostContext : NEFilterExtensionProviderHostContext
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)provideRemediationMap:;
- (void)provideURLAppendStringMap:;
- (void)fetchProviderConnectionWithCompletionHandler:;
- (void)providerControlSocketFileHandle:;
- (void)handleRulesChanged;
- (void)report:;
- (void)sendBrowserContentFilterServerRequest;
- (void)sendSocketContentFilterRequest;
- (void)fetchCurrentRulesForFlow:completionHandler:;
- (void)applySettings:completionHandler:;
- (void)getSourceAppInfo:completionHandler:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
