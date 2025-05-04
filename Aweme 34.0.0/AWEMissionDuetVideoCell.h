@interface AWEMissionDuetVideoCell : UICollectionViewCell
@property (nonatomic) UIImageView thumbnailImageView;
@property (nonatomic) <IESVideoPlayerProtocol> player;
@property (nonatomic) UIViewController<AWEMissionDuetVideoPickerViewController> viewController;
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) AWEUILoadingView loadingIndiator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aweme;
- (void)player:didChangePlaybackStateWithAction:;
- (void)player:didChangeStallState:;
- (void)setAweme:;
- (void)setLoadingIndiator:;
- (id)loadingIndiator;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (id)viewController;
- (id)player;
- (void)setPlayer:;
- (void).cxx_destruct;
- (void)setViewController:;
- (void)setThumbnailImageView:;
- (id)thumbnailImageView;
- (void)resetPlayer;
@end
