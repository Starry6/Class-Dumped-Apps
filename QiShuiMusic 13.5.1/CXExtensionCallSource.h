@interface CXExtensionCallSource : CXCallSource
@property (nonatomic) NSExtension extension;
@property (nonatomic) <NSCopying> requestIdentifier;
@property (nonatomic) CXProviderExtensionHostContext extensionContext;
- (id)requestIdentifier;
- (id)init;
- (void)setExtension:;
- (id)vendorProtocolDelegate;
- (id)initWithExtension:;
- (id)extension;
- (id)bundle;
- (int)processIdentifier;
- (void)setRequestIdentifier:;
- (void).cxx_destruct;
- (id)extensionContext;
- (id)initWithExtensionIdentifier:;
- (void)beginWithCompletionHandler:;
- (void)setExtensionContext:;
@end
