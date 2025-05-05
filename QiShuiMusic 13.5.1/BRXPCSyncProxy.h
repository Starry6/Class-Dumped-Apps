@interface BRXPCSyncProxy : NSProxy
@property (nonatomic) NSError error;
@property (nonatomic) @ result;
- (id)result;
- (void)setError:;
- (id)methodSignatureForSelector:;
- (id)error;
- (void).cxx_destruct;
- (void)setObjResult:error:;
- (void)forwardInvocation:;
- (id)initWithXPCObject:;
- (void)setBoolResult:error:;
- (void)setResult:;
@end
