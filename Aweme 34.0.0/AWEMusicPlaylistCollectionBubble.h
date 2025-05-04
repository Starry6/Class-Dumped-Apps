@interface AWEMusicPlaylistCollectionBubble : UIControl
@property (nonatomic) BOOL isDisplaying;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UIImageView iconright;
@property (nonatomic) UIImageView iconarrow;
@property (nonatomic) @? tapBlock;
- (void)setTapBlock:;
- (id)tapBlock;
- (void)setIsDisplaying:;
- (void)didTapAddtoPlaylist;
- (id)iconright;
- (id)iconarrow;
- (void)showToastinView:targetView:content:animated:autoHideDuration:;
- (void)showToastinView:targetView:content:animted:;
- (void)setIconright:;
- (void)setIconarrow:;
- (id)init;
- (void)dismiss;
- (void).cxx_destruct;
- (BOOL)isDisplaying;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)setupView;
@end
