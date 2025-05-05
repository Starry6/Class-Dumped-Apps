@interface RUIHTMLFooterView : UIView
@property (nonatomic) <RUITableFooterDelegate> delegate;
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
- (double)footerHeightForWidth:inView:;
- (void)setText:attributes:;
- (double)footerHeightForWidth:inTableView:;
- (void)webContainerView:didClickLinkWithURL:;
@end
