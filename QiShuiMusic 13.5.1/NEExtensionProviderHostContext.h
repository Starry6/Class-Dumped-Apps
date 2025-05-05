@interface NEExtensionProviderHostContext : NSExtensionContext
@property (nonatomic) NSInteger requiredEntitlement;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)requiredEntitlement;
- (void)dispose;
- (void)wake;
- (void)startWithOptions:completionHandler:;
- (void)sleepWithCompletionHandler:;
- (void).cxx_destruct;
- (id)description;
- (void)createWithCompletionHandler:;
- (void)setConfiguration:extensionIdentifier:;
- (void)stopWithReason:;
- (void)validateWithCompletionHandler:;
- (void)startedWithError:;
- (void)displayMessage:message:completionHandler:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
