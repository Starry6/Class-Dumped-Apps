@interface VCCaptionTaskInfo : NSObject
@property (nonatomic) SFSpeechRecognitionTask task;
@property (nonatomic) q token;
@property (nonatomic) I updateNumber;
@property (nonatomic) I utteranceNumber;
- (long long)token;
- (id)task;
- (void)setToken:;
- (void)setTask:;
- (unsigned int)utteranceNumber;
- (id)initWithTask:token:utteranceNumber:;
- (unsigned int)updateNumber;
- (void)setUpdateNumber:;
- (void)setUtteranceNumber:;
@end
