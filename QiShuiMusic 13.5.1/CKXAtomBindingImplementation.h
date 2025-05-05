@interface CKXAtomBindingImplementation : NSObject
@property (nonatomic) CKXSchema schema;
- (id)schema;
- (id)init;
- (void)setSchema:;
- (void).cxx_destruct;
- (unsigned long long)topLevelStructToken;
- (unsigned long long)structTokenForClass:;
- (Class)proxyClassForStructToken:;
- (Class)mutableProxyClassForStructToken:;
- (id)orcHelpers;
@end
