@interface AWELiveVSBottomBarView : UIView
@property (nonatomic) IESLiveImageView icon;
@property (nonatomic) UILabel desLabel;
@property (nonatomic) IESLiveImageView arrow;
@property (nonatomic) @? tapBlock;
- (void)setTapBlock:;
- (id)tapBlock;
- (id)desLabel;
- (void)setDesLabel:;
- (void)bottomTapped:;
- (id)icon;
- (id)initWithFrame:;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setDescriptionText:;
- (void)setupUI;
- (id)arrow;
- (void)setArrow:;
@end
