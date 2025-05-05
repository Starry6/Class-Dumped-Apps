@interface CKWeakObjectCallbackProxy : NSObject
@property (nonatomic) @ weakObject;
@property (nonatomic) Protocol callbackProtocol;
@property (nonatomic) BOOL hadObject;
- (id)initWithWeakObject:callbackProtocol:;
- (id)methodSignatureForSelector:;
- (id)weakObject;
- (void).cxx_destruct;
- (void)setCallbackProtocol:;
- (void)setHadObject:;
- (void)setWeakObject:;
- (void)forwardInvocation:;
- (BOOL)hadObject;
- (id)callbackProtocol;
@end
