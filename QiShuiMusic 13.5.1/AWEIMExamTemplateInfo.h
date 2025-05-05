@interface AWEIMExamTemplateInfo : NSObject
@property (nonatomic) q examId;
@property (nonatomic) NSString examUrl;
@property (nonatomic) q retryTimes;
@property (nonatomic) NSString ext;
@property (nonatomic) NSString conversationID;
- (id)examUrl;
- (void)setExt:;
- (long long)examId;
- (long long)retryTimes;
- (void)setExamId:;
- (void)setExamUrl:;
- (void)setRetryTimes:;
- (void).cxx_destruct;
- (id)conversationID;
- (void)setConversationID:;
- (id)ext;
+ (id)templatesWithContentDict:;
@end
