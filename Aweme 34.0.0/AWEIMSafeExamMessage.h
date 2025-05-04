@interface AWEIMSafeExamMessage : AWEIMTextMessage
@property (nonatomic) NSArray examTemplates;
@property (nonatomic) NSString rawMessageContent;
@property (nonatomic) q examAnswerStatus;
- (id)initWithContentDict:;
- (id)supportMessageMenuTypeList;
- (BOOL)isAllowedEmojiReply;
- (void)didFinishConfig;
- (long long)examAnswerStatus;
- (id)examTemplates;
- (void)setRawMessageContent:;
- (void)setExamTemplates:;
- (id)rawMessageContent;
- (void)setExamAnswerStatus:;
- (id)contentAttributes;
- (void).cxx_destruct;
+ (Class)viewModelClass;
@end
