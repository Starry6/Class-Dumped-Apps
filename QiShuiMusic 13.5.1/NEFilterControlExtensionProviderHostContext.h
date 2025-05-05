@interface NEFilterControlExtensionProviderHostContext : NEFilterExtensionProviderHostContext
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleNewFlow:completionHandler:;
- (void)handleReport:;
- (void)notifyRulesChanged;
- (void)provideRemediationMap:;
- (void)provideURLAppendStringMap:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
