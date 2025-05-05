@interface BDXBridgeInvocationGuarder : NSObject
@property (nonatomic) BDXBridgeInvocationGuarderParams params;
@property (nonatomic) q invocationCount;
- (void)setInvocationCount:;
- (void)dealloc;
- (id)initWithParams:;
- (void)invoke;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
- (long long)invocationCount;
@end
