@interface AWESingleMusicTitleView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) <ACCInsetsLabelProtocol> songTagLabel;
@property (nonatomic) BOOL isEliteVersion;
- (id)songTagLabel;
- (BOOL)isEliteVersion;
- (void)setIsEliteVersion:;
- (void)setSongTagLabel:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setupUI;
@end
