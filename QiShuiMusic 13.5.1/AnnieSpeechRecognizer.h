@interface AnnieSpeechRecognizer : NSObject
@property (nonatomic) SAMICore handler;
@property (nonatomic) PuzzleContext context;
- (void)stopRecognition;
- (void)recognizePCMAudioData:withDataSize:;
- (BOOL)setupSAMIWithAppKey:token:sosSilenceTimeout:eosSilenceTimeout:sentenceMaxSeconds:listener:;
- (BOOL)startRecognitionWithAppKey:token:sosSilenceTimeout:eosSilenceTimeout:sentenceMaxSeconds:listener:;
- (id)context;
- (void)setHandler:;
- (id)handler;
- (void).cxx_destruct;
- (void)setContext:;
@end
