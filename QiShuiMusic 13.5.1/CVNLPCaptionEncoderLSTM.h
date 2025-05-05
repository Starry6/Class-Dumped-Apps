@interface CVNLPCaptionEncoderLSTM : CVNLPCaptionEncoder
- (void)dealloc;
- (id)initWithOptions:runTimeParams:;
- (void)computeCaptionForImage:outputs:;
- (void)_run:meanFeatures:attnFeatures:projectedAttnFeatures:;
@end
