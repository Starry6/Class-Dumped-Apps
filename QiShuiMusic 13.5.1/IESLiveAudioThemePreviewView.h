@interface IESLiveAudioThemePreviewView : UIView
@property (nonatomic) <IESLivePhotoPickerAsset> asset;
@property (nonatomic) BDImageView imageView;
@property (nonatomic) AVPlayer avPlayer;
@property (nonatomic) AVPlayerLayer playLayer;
@property (nonatomic) AVPlayerItem playerItem;
- (void)moviePlayDidEnd;
- (void)handleDidBecomeActiveNotification:;
- (id)initWithFrame:asset:;
- (id)playLayer;
- (void)setPlayLayer:;
- (void)dealloc;
- (void)layoutSubviews;
- (id)asset;
- (id)playerItem;
- (void)setup;
- (void).cxx_destruct;
- (id)imageView;
- (void)setAsset:;
- (void)setImageView:;
- (id)avPlayer;
- (void)setAvPlayer:;
- (void)setPlayerItem:;
@end
