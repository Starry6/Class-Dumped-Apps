@interface AWETeenGeneralSingleVideoCell : AWETeenGeneralBaseVideoCell
@property (nonatomic) UIView albumDarkShadow;
@property (nonatomic) UIView albumLightShadow;
- (id)createInteractionView;
- (void)showLog;
- (void)configWithModel:interactionDelegate:parentVC:cardType:extraParam:;
- (void)initializeLayout;
- (id)albumDarkShadow;
- (id)albumLightShadow;
- (void)setAlbumDarkShadow:;
- (void)setAlbumLightShadow:;
- (void)play;
- (BOOL)canPlay;
- (void).cxx_destruct;
- (void)pause;
+ (id)cellSizeWithModel:cardType:;
@end
