@interface SAMICore_VoiceAssistantTextData : NSObject
@property (nonatomic) NSString taskId;
@property (nonatomic) NSString text;
- (void)dealloc;
- (void)setText:;
- (id)taskId;
- (id)text;
- (void)setTaskId:;
@end
