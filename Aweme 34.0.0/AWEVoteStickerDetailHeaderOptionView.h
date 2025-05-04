@interface AWEVoteStickerDetailHeaderOptionView : UIView
@property (nonatomic) UILabel numberLabel;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL darkMode;
- (BOOL)enableMutilOption;
- (id)initWithFrame:darkMode:;
- (void)configWithOption:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (BOOL)selected;
- (void)layoutSubviews;
- (void)setSelected:;
- (BOOL)darkMode;
- (void)setDarkMode:;
- (void)setNumberLabel:;
- (id)numberLabel;
@end
