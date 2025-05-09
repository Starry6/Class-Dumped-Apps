@interface IESECStoreLiveHeaderLiveInfoView : UIView
@property (nonatomic) CAGradientLayer gradientLayerBottom;
@property (nonatomic) CAGradientLayer whiteTransitionLayer;
@property (nonatomic) CALayer pureWhiteLayer;
@property (nonatomic) IESECButton muteButton;
@property (nonatomic) IESECStoreHeaderLiveGiftView liveGiftView;
@property (nonatomic) IESECGradientView liveNativeGradientView;
@property (nonatomic) UILabel liveTitleLabel;
@property (nonatomic) UIView cardContainer;
@property (nonatomic) IESECStoreExtensionAreaDragDownView dragDownView;
@property (nonatomic) double liveInfoBottomOffset;
@property (nonatomic) double gradientLayerBottomHeight;
@property (nonatomic) BOOL hideWhiteTransitionLayer;
@property (nonatomic) double bottomPureWhiteLayerHeight;
@property (nonatomic) BOOL showNativeGiftView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)bottomPureWhiteLayerHeight;
- (id)cardContainer;
- (void)cardContainerShouldRemove;
- (void)cardContainerShouldShowWithCard:cardWrapper:;
- (void)configBottomGradientLayers:;
- (id)dragDownView;
- (id)gradientLayerBottom;
- (double)gradientLayerBottomHeight;
- (BOOL)hideWhiteTransitionLayer;
- (id)liveGiftView;
- (double)liveInfoBottomOffset;
- (id)liveNativeGradientView;
- (id)liveTitleLabel;
- (void)moveBottomGradientLayer:;
- (id)pluginCardWrapper;
- (id)pureWhiteLayer;
- (void)setBottomPureWhiteLayerHeight:;
- (void)setCardContainer:;
- (void)setDragDownView:;
- (void)setGradientLayerBottom:;
- (void)setGradientLayerBottomHeight:;
- (void)setHideWhiteTransitionLayer:;
- (void)setLiveGiftView:;
- (void)setLiveInfoBottomOffset:;
- (void)setLiveNativeGradientView:;
- (void)setLiveTitleLabel:;
- (void)setPureWhiteLayer:;
- (void)setShowNativeGiftView:;
- (void)setSubviewHidden:;
- (void)setWhiteTransitionLayer:;
- (BOOL)showNativeGiftView;
- (BOOL)whetherCanShow;
- (id)whiteTransitionLayer;
- (id)init;
- (void)layoutSubviews;
- (id)hitTest:withEvent:;
- (void).cxx_destruct;
- (void)setupViews;
- (id)muteButton;
- (void)setMuteButton:;
@end
