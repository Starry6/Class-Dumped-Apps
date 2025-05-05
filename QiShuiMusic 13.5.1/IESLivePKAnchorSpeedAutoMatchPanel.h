@interface IESLivePKAnchorSpeedAutoMatchPanel : HTSLivePopUpView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIButton actionButton;
@property (nonatomic) UIButton speedButton;
@property (nonatomic) UIImageView searchEmptyImageView;
- (void)setSpeedButton:;
- (void)actionButtonDidClick;
- (id)initWithFrame:DIContext:;
- (id)searchEmptyImageView;
- (void)setSearchEmptyImageView:;
- (id)speedButton;
- (void)speedButtonDidClick;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)actionButton;
- (void)setActionButton:;
- (id)subTitleLabel;
- (void)setSubTitleLabel:;
- (void)layoutUI;
@end
