@interface RUIHTMLHeaderView : UIView
@property (nonatomic) <RUIHeaderDelegate> delegate;
@property (nonatomic) NSURL baseURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBaseURL:;
- (id)baseURL;
- (void)layoutSubviews;
- (void)setDelegate:;
- (id)initWithAttributes:;
- (id)delegate;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)setText:attributes:;
- (double)headerHeightForWidth:inView:;
- (void)setSectionIsFirst:;
- (void)setHTMLContent:toElementsMatchingQuery:;
- (double)webViewWidth;
- (void)webContainerView:didClickLinkWithURL:;
- (void)webContainerViewContentDidChange:;
- (void)setFooterStyleText:attributes:;
- (id)quoteEncodedStringWithString:;
@end
