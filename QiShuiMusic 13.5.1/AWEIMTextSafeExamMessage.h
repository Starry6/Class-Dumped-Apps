@interface AWEIMTextSafeExamMessage : AWEIMTextMessage
@property (nonatomic) NSArray examTemplates;
@property (nonatomic) q elderlyPeopleAnswerStatus;
@property (nonatomic) NSString rawMessageContent;
- (void)didFinishConfig;
- (long long)elderlyPeopleAnswerStatus;
- (id)examTemplates;
- (id)initWithContentDict:;
- (BOOL)isAllowedEmojiReply;
- (id)rawMessageContent;
- (void)setElderlyPeopleAnswerStatus:;
- (void)setExamTemplates:;
- (void)setRawMessageContent:;
- (id)contentAttributes;
- (void).cxx_destruct;
@end
