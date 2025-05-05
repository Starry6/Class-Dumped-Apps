@interface UIDictationCommandHandler : NSObject
@property (nonatomic) SRCSCommandRecognitionSystem cmdRecSystem;
@property (nonatomic) SRCSCommandRecognizer cmdRecognizer;
- (void).cxx_destruct;
- (void)registerCommandIdentifiers:locale:;
- (void)recognizeCommandWithPhrases:completionHandler:;
- (id)cmdRecSystem;
- (void)setCmdRecSystem:;
- (id)cmdRecognizer;
- (void)setCmdRecognizer:;
@end
