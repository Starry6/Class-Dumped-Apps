@interface AWEIMChatInputTextDraftModel : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) NSString quoteReplyMessageID;
@property (nonatomic) NSDictionary customQuoteInfo;
@property (nonatomic) NSString sessionID;
@property (nonatomic) double createAt;
@property (nonatomic) NSArray richTextInfos;
- (id)quoteReplyMessageID;
- (double)createAt;
- (void)setCreateAt:;
- (void)setQuoteReplyMessageID:;
- (void)setRichTextInfos:;
- (id)richTextInfos;
- (void)setCustomQuoteInfo:;
- (id)customQuoteInfo;
- (id)toDraftJsonContent;
- (void)setSessionID:;
- (id)initWithDictionary:error:;
- (void)setText:;
- (id)text;
- (id)sessionID;
- (void).cxx_destruct;
@end
