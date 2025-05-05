@interface SCNMTLSemanticResourceBinding : SCNMTLResourceBinding
@property (nonatomic) q semanticsCount;
@property (nonatomic) q bufferSize;
- (void)dealloc;
- (void)setBufferSize:;
- (long long)bufferSize;
- (long long)semanticsCount;
- (void)setSemanticsCount:;
@end
