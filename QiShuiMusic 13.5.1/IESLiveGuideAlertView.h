@interface IESLiveGuideAlertView : UIView
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UIButton actionButton;
@property (nonatomic) UIButton detailButton;
@property (nonatomic) UIImageView titleImageView;
@property (nonatomic) NSArray imageURLs;
@property (nonatomic) NSAttributedString actionTitle;
@property (nonatomic) NSAttributedString detailTitle;
@property (nonatomic) @? actionBlock;
@property (nonatomic) @? detailBlock;
@property (nonatomic) @? closeCallback;
- (void)setDetailBlock:;
- (id)closeCallback;
- (id)detailBlock;
- (id)initWithImageURLs:actionTitle:detailTitle:actionBlock:detailBlock:closeCallback:;
- (void)setCloseCallback:;
- (void)tapClose:;
- (void)tapDetail:;
- (id)backgroundImageView;
- (void)layoutSubviews;
- (id)titleImageView;
- (id)actionBlock;
- (id)actionTitle;
- (void)setActionTitle:;
- (void).cxx_destruct;
- (void)loadData;
- (void)setupUI;
- (id)actionButton;
- (void)setActionButton:;
- (void)setActionBlock:;
- (id)closeButton;
- (void)setCloseButton:;
- (id)imageURLs;
- (void)setImageURLs:;
- (void)setBackgroundImageView:;
- (id)detailTitle;
- (void)setDetailTitle:;
- (id)detailButton;
- (void)setDetailButton:;
- (void)setTitleImageView:;
- (void)tapAction:;
@end
