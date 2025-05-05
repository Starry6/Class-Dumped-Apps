@interface SecKeyProxyTarget : NSObject
@property (nonatomic) ^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v} key;
- (void)initializeWithReply:;
- (id)key;
- (void).cxx_destruct;
- (void)getBlockSizeWithReply:;
- (void)getAttributesWithReply:;
- (void)getExternalRepresentationWithReply:;
- (void)getDescriptionWithReply:;
- (void)getAlgorithmIDWithReply:;
- (void)getPublicKey:;
- (void)performOperation:algorithm:parameters:reply:;
- (id)initWithKey:certificate:;
@end
