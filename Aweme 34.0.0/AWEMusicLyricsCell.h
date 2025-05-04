@interface AWEMusicLyricsCell : UITableViewCell
@property (nonatomic) UILabel label;
@property (nonatomic) Q state;
@property (nonatomic) double unselectedScale;
@property (nonatomic) AWEMusicLyricsCellModel model;
- (void)configWithModel:;
- (void)setUnselectedScale:;
- (double)unselectedScale;
- (void)setModel:;
- (void)setLabel:;
- (void)setup;
- (unsigned long long)state;
- (id)label;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setState:;
@end
