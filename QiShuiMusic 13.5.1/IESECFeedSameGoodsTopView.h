@interface IESECFeedSameGoodsTopView : UIView
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) BOOL showFullScreenStyle;
@property (nonatomic) @? close;
- (void)arrowTapped;
- (void)closeButtonClick:;
- (void)setClose:;
- (void)setShowFullScreenStyle:;
- (BOOL)showFullScreenStyle;
- (void)setTitleLabel:;
- (id)close;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
