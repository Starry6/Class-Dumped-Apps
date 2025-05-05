@interface INExtension : NSObject
@property (nonatomic) INExtensionContext _extensionContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_extensionContext;
- (void).cxx_destruct;
- (void)beginRequestWithExtensionContext:;
- (id)handlerForIntent:;
@end
