@interface NEFilterControlExtensionProviderContext : NEFilterExtensionProviderContext
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)dispose;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)extensionPoint;
- (Class)requiredProviderSuperClass;
- (void)startFilterWithOptions:completionHandler:;
- (void)handleNewFlow:completionHandler:;
- (void)handleReport:;
- (void)notifyRulesChanged;
- (void)provideRemediationMap:;
- (void)provideURLAppendStringMap:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
