@interface AFEnablementConfiguration : NSObject
@property (nonatomic) BOOL requiresVoiceSelection;
@property (nonatomic) NSDictionary voiceCountForRecognitionLanguage;
@property (nonatomic) BOOL voiceSelectionAllowsRandomSelection;
@property (nonatomic) @? completionLoggingBlock;
- (void).cxx_destruct;
- (id)initWithRequiresVoiceSelection:voiceSelectionAllowsChooseForMe:voiceCountForRecognitionLanguage:completionLoggingBlock:;
- (BOOL)requiresVoiceSelectionForRecognitionLanguage:;
- (BOOL)voiceSelectionAllowsRandomSelection;
- (id)completionLoggingBlock;
- (BOOL)requiresVoiceSelection;
- (id)voiceCountForRecognitionLanguage;
@end
