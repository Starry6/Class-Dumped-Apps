@interface AWEIMTextSafeExamMessage : AWEIMTextMessage
@property (nonatomic) NSArray examTemplates;
@property (nonatomic) q elderlyPeopleAnswerStatus;
@property (nonatomic) NSString rawMessageContent;
- (id)initWithContentDict:;
- (id)supportMessageMenuTypeList;
- (BOOL)isAllowedEmojiReply;
- (void)didFinishConfig;
- (long long)elderlyPeopleAnswerStatus;
- (id)examTemplates;
- (void)setRawMessageContent:;
- (void)setExamTemplates:;
- (void)setElderlyPeopleAnswerStatus:;
- (id)rawMessageContent;
- (id)contentAttributes;
- (void).cxx_destruct;
@end
