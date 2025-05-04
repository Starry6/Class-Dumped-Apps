@interface AWEProgressPauseSpeedView : UIView
@property (nonatomic) UIImageView clockImageView;
@property (nonatomic) UILabel speedLabel;
@property (nonatomic) @? tapBlock;
- (void)setTapBlock:;
- (id)tapBlock;
- (id)clockImageView;
- (void)setClockImageView:;
- (id)speedLabel;
- (void)setSpeedLabel:;
- (id)init;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setCurrentSpeed:;
- (void)click;
@end
