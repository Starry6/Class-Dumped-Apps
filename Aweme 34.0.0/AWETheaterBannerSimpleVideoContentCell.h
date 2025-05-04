@interface AWETheaterBannerSimpleVideoContentCell : AWETheaterBannerBaseContentCell
@property (nonatomic) <IESVideoPlayerProtocol> currentPlayer;
@property (nonatomic) UIImageView soundImageView;
@property (nonatomic) UILabel bannerTitleLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)player:didChangePlaybackStateWithAction:;
- (void)playerWillLoopPlaying:;
- (void)configWithSectionItem:context:logExtraDict:;
- (id)bannerTitleLabel;
- (id)soundImageView;
- (void)soundImageViewTapped;
- (void)setBannerTitleLabel:;
- (void)setSoundImageView:;
- (void)play;
- (void).cxx_destruct;
- (void)updateMuteStatus:;
- (void)stop;
- (void)pause;
- (void)setupUI;
- (id)currentPlayer;
- (void)setCurrentPlayer:;
@end
