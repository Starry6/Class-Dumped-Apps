@interface AWEIMEmoticonAuthorCollectionFooter : UICollectionReusableView
@property (nonatomic) UIButton gotoHomePageButton;
@property (nonatomic) NSString title;
@property (nonatomic) UIImage tipImage;
@property (nonatomic) @? didClickFooter;
- (void)setTipImage:;
- (id)tipImage;
- (id)gotoHomePageButton;
- (id)didClickFooter;
- (void)__didClickGoToHomePage;
- (void)setDidClickFooter:;
- (void)setGotoHomePageButton:;
- (id)intrinsicContentSize;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setupUI;
@end
