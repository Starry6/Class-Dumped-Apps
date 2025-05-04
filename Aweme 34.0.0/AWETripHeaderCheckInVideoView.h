@interface AWETripHeaderCheckInVideoView : UIView
@property (nonatomic) AWETripHeaderCheckInAvatars iconGroup;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView arrowIcon;
@property (nonatomic) UIImageView rightSideArc;
@property (nonatomic) UIView placeHolderView;
@property (nonatomic) @? onClickBlock;
- (void)setOnClickBlock:;
- (double)expectedWidth;
- (id)onClickBlock;
- (id)arrowIcon;
- (void)setArrowIcon:;
- (void)onClickAction;
- (void)configWithHeadVideoInfo:;
- (id)rightSideArc;
- (id)iconGroup;
- (void)setIconGroup:;
- (void)setRightSideArc:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (id)placeHolderView;
- (void)setPlaceHolderView:;
@end
