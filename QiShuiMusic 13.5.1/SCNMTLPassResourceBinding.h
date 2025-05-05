@interface SCNMTLPassResourceBinding : SCNMTLResourceBinding
@property (nonatomic) q inputsCount;
@property (nonatomic) q bufferSize;
- (id)init;
- (void)dealloc;
- (void)setBufferSize:;
- (long long)bufferSize;
- (long long)inputsCount;
- (void)setInputsCount:;
@end
