@interface IESLiveDanmakuSupremeView : IESLiveDanmakuBaseView
@property (nonatomic) UIView containerView;
@property (nonatomic) IESLiveDanmakuNormalLabel mainLabel;
@property (nonatomic) UIImageView mainBackgroundView;
@property (nonatomic) UIView mainContainerView;
@property (nonatomic) double cacheDanmukuWidth;
@property (nonatomic) <IESLiveLanguageService> languageService;
@property (nonatomic) NSArray atmosphereLabels;
@property (nonatomic) UIView atmosphereMaskContainerView;
@property (nonatomic) CAGradientLayer atmosphereMaskLayer;
@property (nonatomic) UIView<IESLiveWebPPlayer> shinningView;
@property (nonatomic) NSDictionary atmosphereOpcaity;
@property (nonatomic) IESLiveAnimatedImageView badgeView;
@property (nonatomic) IESLiveDanmakuVariousViewModel viewModel;
- (void)setAtmosphereMaskContainerView:;
- (void)updateWithNode:;
- (double)alphaAtmophereDanamkuWithIndex:;
- (BOOL)enableBadgeIcon;
- (id)languageService;
- (void)startAtmosphereContentAnimation;
- (id)atmosphereLabels;
- (id)atmosphereMaskContainerView;
- (id)atmosphereMaskLayer;
- (id)atmosphereOpcaity;
- (double)cacheDanmukuWidth;
- (void)disableHostLocalizationsWithLabel:;
- (id)mainBackgroundView;
- (id)mainContainerView;
- (double)mainDanmakuWidth;
- (void)refreshDanmakuWithViewModel:;
- (void)setAtmosphereLabels:;
- (void)setAtmosphereMaskLayer:;
- (void)setAtmosphereOpcaity:;
- (void)setCacheDanmukuWidth:;
- (void)setLanguageService:;
- (void)setMainBackgroundView:;
- (void)setMainContainerView:;
- (void)setShinningView:;
- (id)shinningView;
- (BOOL)showAtmosphereDanmakuWithCurrentCols:index:;
- (void)layoutViews;
- (id)badgeView;
- (id)init;
- (id)viewModel;
- (id)containerView;
- (void)setContainerView:;
- (void)prepareForReuse;
- (void)startAnimation;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)setBadgeView:;
- (void)setViewModel:;
- (void)stopAnimation;
- (void)setupViews;
- (id)mainLabel;
- (void)setMainLabel:;
@end
