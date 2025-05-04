@interface AWEIMExamTemplateInfo : NSObject
@property (nonatomic) q examId;
@property (nonatomic) NSString examUrl;
@property (nonatomic) q retryTimes;
@property (nonatomic) NSString ext;
@property (nonatomic) q examSubId;
@property (nonatomic) Q type;
@property (nonatomic) NSString conversationID;
- (void)setExt:;
- (long long)retryTimes;
- (void)setRetryTimes:;
- (long long)examId;
- (id)examUrl;
- (void)setExamId:;
- (void)setExamUrl:;
- (void)setExamSubId:;
- (long long)examSubId;
- (unsigned long long)type;
- (id)conversationID;
- (void)setType:;
- (void).cxx_destruct;
- (void)setConversationID:;
- (id)ext;
+ (id)templatesWithContentDict:;
@end
