@interface AWEAnimatedMusicCoverButton : ACCAnimatedButton
@property (nonatomic) CALayer loadingIcon;
@property (nonatomic) double ownerImageWidth;
@property (nonatomic) UIImageView ownerImageView;
@property (nonatomic) UIImage defaultCover;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) {CGPoint=dd} loadingIconCenterOffset;
- (void)setLoadingIcon:;
- (id)loadingIcon;
- (id)ownerImageView;
- (double)ownerImageWidth;
- (void)setOwnerImageView:;
- (void)setOwnerImageWidth:;
- (id)defaultCover;
- (void)setDefaultCover:;
- (void)setLoadingIconCenterOffset:;
- (void)refreshWithMusic:defaultAvatarURL:;
- (void)p_refreshLoadingIconPos;
- (id)loadingIconCenterOffset;
- (BOOL)isLoading;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setIsLoading:;
@end
