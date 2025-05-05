@interface CJPayNoNetworkView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) CJPayButton refreshButton;
@property (nonatomic) @? refreshBlock;
- (void)p_refreshButtonTapped;
- (void)p_setupUI;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)imageView;
- (id)titleLabel;
- (void)setImageView:;
- (id)subTitleLabel;
- (void)setSubTitleLabel:;
- (id)refreshButton;
- (void)setRefreshButton:;
- (void)setRefreshBlock:;
- (id)refreshBlock;
@end
