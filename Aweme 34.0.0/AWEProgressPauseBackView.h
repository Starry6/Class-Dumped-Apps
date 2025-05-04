@interface AWEProgressPauseBackView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) @? tapBlock;
- (void)setTapBlock:;
- (id)tapBlock;
- (void)updateFrameInSmallPhone;
- (id)init;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (void)click;
@end
