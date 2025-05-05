@interface FlowEstimate : EspressoModel
@property (nonatomic) Q width;
@property (nonatomic) Q height;
@property (nonatomic) Q channels;
@property (nonatomic) I level;
- (void)setLevel:;
- (unsigned long long)channels;
- (unsigned int)level;
- (void)setWidth:;
- (unsigned long long)height;
- (unsigned long long)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (void)setChannels:;
- (id)initWithMode:level:;
- (BOOL)bindCVPixelBuffers:correlation:flow:output:;
- (BOOL)estimateFlow:correlation:flow:output:callback:;
@end
