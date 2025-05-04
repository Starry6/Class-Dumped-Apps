@interface AWEIMQuoteReplyDetailStyleProps : AWEIMUIViewPresenterProps
@property (nonatomic) NSString invisibleString;
@property (nonatomic) BOOL contentIsAvailable;
@property (nonatomic) NSString quoteTitle;
@property (nonatomic) NSAttributedString attribuiteQuoteTitle;
@property (nonatomic) BOOL chatListHasBackgroundImg;
@property (nonatomic) BOOL useShortMarginBottom;
- (BOOL)chatListHasBackgroundImg;
- (void)setInvisibleString:;
- (void)setChatListHasBackgroundImg:;
- (id)invisibleString;
- (id)quoteTitle;
- (void)setQuoteTitle:;
- (void)setUseShortMarginBottom:;
- (void)setAttribuiteQuoteTitle:;
- (id)attribuiteQuoteTitle;
- (BOOL)useShortMarginBottom;
- (void).cxx_destruct;
- (BOOL)contentIsAvailable;
- (void)setContentIsAvailable:;
@end
