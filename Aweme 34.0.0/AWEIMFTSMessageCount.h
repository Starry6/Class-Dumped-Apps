@interface AWEIMFTSMessageCount : NSObject
@property (nonatomic) NSString conversationID;
@property (nonatomic) q count;
@property (nonatomic) q sortOrder;
@property (nonatomic) AWEIMFTSResultData result;
- (long long)sortOrder;
- (void)setResult:;
- (void)setCount:;
- (long long)count;
- (void)setSortOrder:;
- (id)conversationID;
- (void).cxx_destruct;
- (id)result;
- (void)setConversationID:;
@end
