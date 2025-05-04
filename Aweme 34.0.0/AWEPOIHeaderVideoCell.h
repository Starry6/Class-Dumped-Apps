@interface AWEPOIHeaderVideoCell : AWEPOIHeaderBaseCell
@property (nonatomic) AWEPOIVideoPlayerView playerView;
@property (nonatomic) AWEPOIPhotoModel data;
@property (nonatomic) <AWEPOIVideoPlayerDelegate> playerDelegate;
- (id)playerDelegate;
- (void)setPlayerDelegate:;
- (void)didEndDisplayingCell;
- (void)updateViewFrame:;
- (void)updateHeight:isMaxUnfold:duration:;
- (void)updateHeight:isMaxUnfold:;
- (void)didReceiveTripNativeHeaderBgShowNotification;
- (void)didReceiveTripNativeHeaderBgHideNotification;
- (id)mutePositionByStyle:;
- (void)updateStyle:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)setPlayerView:;
- (void)setData:;
- (id)playerView;
- (void).cxx_destruct;
- (id)data;
- (void)updateData:completion:;
- (void)setupViews;
- (void)willDisplayCell;
@end
