@interface AWECommentMusicResultTableViewCell : AWEUIListTableViewCell
@property (nonatomic) UIButton playButton;
@property (nonatomic) @? playButtonTapBlock;
- (void)configureUI;
- (id)initWithCellType:cellStyle:reuseIdentifier:;
- (id)timeString:;
- (id)playButtonTapBlock;
- (void)configWithPlayerStatus:;
- (void)setPlayButtonTapBlock:;
- (void)__startAnimation;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)configureWithModel:;
- (id)playButton;
- (void)setPlayButton:;
- (void)__stopAnimation;
- (void)playButtonTapped;
+ (id)identifier;
@end
