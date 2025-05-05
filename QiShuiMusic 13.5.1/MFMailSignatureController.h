@interface MFMailSignatureController : NSObject
- (id)_signatureStringForSender:;
- (BOOL)isDefaultSignatureForSender:;
- (void)addSignatureForSender:bodyField:prepend:;
- (void)removeSignatureForSender:bodyField:;
- (void)updateSignatureForSender:bodyField:;
- (void)finalizeSignatureForBodyField:completionHandler:;
- (id)_getSignatureStringForSender:;
@end
