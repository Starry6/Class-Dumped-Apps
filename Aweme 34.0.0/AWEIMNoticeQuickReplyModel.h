@interface AWEIMNoticeQuickReplyModel : NSObject
@property (nonatomic) NSString noticeSchema;
@property (nonatomic) NSString quoteText;
@property (nonatomic) NSString quoteTextName;
@property (nonatomic) NSString quoteTextContent;
@property (nonatomic) q quoteNoticeType;
- (id)noticeSchema;
- (void)setNoticeSchema:;
- (id)quoteText;
- (void)setQuoteText:;
- (id)quoteTextName;
- (void)setQuoteTextName:;
- (id)quoteTextContent;
- (void)setQuoteTextContent:;
- (long long)quoteNoticeType;
- (void)setQuoteNoticeType:;
- (void).cxx_destruct;
@end
