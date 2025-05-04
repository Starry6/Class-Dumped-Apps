@interface AWELVPlusNumberCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel typeLabel;
@property (nonatomic) UIView cornerMarkView;
@property (nonatomic) UILabel numberLabel;
@property (nonatomic) UIView centerView;
@property (nonatomic) AWERelatedVideoPlayingAnimationView animationView;
@property (nonatomic) AWELVideoEpisodeInfoModel episodeInfoModel;
- (void)updateSelected:;
- (id)cornerMarkView;
- (void)setCornerMarkView:;
- (void)updateCellWithEpisodeModelSetTag:;
- (void)setEpisodeInfoModel:;
- (id)episodeInfoModel;
- (void)playingCell;
- (void)notPlayingCell;
- (id)centerView;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setCenterView:;
- (void)setTypeLabel:;
- (id)typeLabel;
- (void)setupUI;
- (id)animationView;
- (void)setAnimationView:;
- (void)setNumberLabel:;
- (id)numberLabel;
@end
