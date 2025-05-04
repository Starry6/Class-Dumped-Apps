@interface AWEIMAudioContentProps : AWEIMUIViewPresenterProps
@property (nonatomic) AWEIMMessage message;
@property (nonatomic) AWEIMAudioMessageViewModel cellViewModel;
@property (nonatomic) BOOL isQuoteReplyStyle;
@property (nonatomic) BOOL chatListHasBackgroundImg;
@property (nonatomic) @? bubbleTappedBlock;
- (id)cellViewModel;
- (void)setCellViewModel:;
- (BOOL)chatListHasBackgroundImg;
- (void)setChatListHasBackgroundImg:;
- (void)setBubbleTappedBlock:;
- (BOOL)isQuoteReplyStyle;
- (id)bubbleTappedBlock;
- (void)setIsQuoteReplyStyle:;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
@end
