@interface AWESingleMusicCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWESingleMusicView musicView;
@property (nonatomic) BOOL showMore;
@property (nonatomic) BOOL showClipButton;
- (void)configWithPlayerStatus:;
- (void)configWithMusicModel:;
- (id)musicView;
- (void)setMusicView:;
- (void)setShowMore:;
- (void)setShowClipButton:;
- (BOOL)showMore;
- (BOOL)showClipButton;
- (void)configWithMusicModel:rank:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
@end
