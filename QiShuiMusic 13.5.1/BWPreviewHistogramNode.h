@interface BWPreviewHistogramNode : BWNode
@property (nonatomic) BOOL msrHistogramsEnabled;
@property (nonatomic) BOOL ispHistogramsEnabled;
- (id)init;
- (id)nodeType;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
- (BOOL)msrHistogramsEnabled;
- (void)setMsrHistogramsEnabled:;
- (BOOL)ispHistogramsEnabled;
- (void)setIspHistogramsEnabled:;
@end
