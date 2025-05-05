@interface IESECWinContainerErrorView : UIView
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UIButton refreshButton;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) @? refreshBlock;
- (id)descLabel;
- (void)setDescLabel:;
- (void)refreshButtonTapped;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
- (void)setUpViews;
- (id)refreshButton;
- (void)setRefreshButton:;
- (void)setRefreshBlock:;
- (id)refreshBlock;
@end
