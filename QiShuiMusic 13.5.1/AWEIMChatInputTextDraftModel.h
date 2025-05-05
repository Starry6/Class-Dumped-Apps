@interface AWEIMChatInputTextDraftModel : IESIMBaseApiModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString quoteReplyMessageID;
@property (nonatomic) double createAt;
- (double)createAt;
- (id)quoteReplyMessageID;
- (void)setCreateAt:;
- (void)setQuoteReplyMessageID:;
- (void)setText:;
- (void).cxx_destruct;
- (id)text;
+ (id)JSONKeyPathsByPropertyKey;
@end
