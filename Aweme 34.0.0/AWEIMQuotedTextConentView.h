@interface AWEIMQuotedTextConentView : UIView
@property (nonatomic) BOOL chatListHasBackgroundImg;
@property (nonatomic) UILabel invisibleStatusLabel;
@property (nonatomic) YYLabel contentLabel;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView quoteReplyVerticalLineView;
- (BOOL)chatListHasBackgroundImg;
- (void)setChatListHasBackgroundImg:;
- (id)invisibleStatusLabel;
- (void)setInvisibleStatusLabel:;
- (id)imageDisplayAttributedStringForMsg:;
- (id)quoteReplyVerticalLineView;
- (id)quoteContentAttributes;
- (void)updateChatBackgroundChanged:;
- (void)configWithMsg:position:;
- (void)setQuoteReplyVerticalLineView:;
- (id)init;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
@end
