@interface AnnieStartSpeechRecognitionParamModel : IESLiveBridgeModel
@property (nonatomic) NSString appKey;
@property (nonatomic) NSNumber sosSilenceTimeout;
@property (nonatomic) NSNumber eosSilenceTimeout;
@property (nonatomic) NSNumber sentenceMaxSeconds;
- (id)appKey;
- (id)eosSilenceTimeout;
- (id)sentenceMaxSeconds;
- (void)setAppKey:;
- (void)setEosSilenceTimeout:;
- (void)setSentenceMaxSeconds:;
- (void)setSosSilenceTimeout:;
- (id)sosSilenceTimeout;
- (void).cxx_destruct;
@end
