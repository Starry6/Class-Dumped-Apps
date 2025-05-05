@interface CVNLPCaptionDecoderLSTM : CVNLPCaptionDecoder
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithOptions:runTimeParams:;
- (id)computeCaptionForImageWithInputs:genderOption:;
- (id)packBeamID:tokenID:lstmAttnState:lstmLangState:softmax:;
- (void)extractBeamID:tokenID:lstmAttnState:lstmLangState:fromFollowup:;
@end
