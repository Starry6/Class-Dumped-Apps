@interface IESLiveEffectTrayView : UIView
@property (nonatomic) IESLiveFlexBackgroundImageView backgroundContainer;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) HTSLiveArtTextLabel xLabel;
@property (nonatomic) HTSLiveArtTextLabel comboNumberLabel;
@property (nonatomic) UIView comboContainerView;
@property (nonatomic) @? currentComboCompletion;
@property (nonatomic) IESLiveMessageTrayEffectModel model;
@property (nonatomic) NSMutableArray comboInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) @? allAnimationFinished;
@property (nonatomic) IESLivePSComponentConfigModel configModel;
@property (nonatomic) HTSEventContext trackContext;
- (void)appear:;
- (void)setConfigModel:;
- (id)allAnimationFinished;
- (void)comboAnimationWithNum:duration:completion:;
- (id)comboContainerView;
- (id)comboInfo;
- (id)comboNumberLabel;
- (id)commonParamsForTracker;
- (void)configComboLabel;
- (id)configModel;
- (id)currentComboCompletion;
- (void)disappear:;
- (void)handleAssembleBusiness:;
- (void)mergeComboInfoWithModel:;
- (void)publicScreenComponentProduced;
- (void)setAllAnimationFinished:;
- (void)setComboContainerView:;
- (void)setComboInfo:;
- (void)setComboNumberLabel:;
- (void)setCurrentComboCompletion:;
- (void)setTrackContext:;
- (void)startComboIfNeed;
- (void)tapView:;
- (id)trackContext;
- (void)trackViewShow;
- (void)trackViewTap;
- (void)setXLabel:;
- (id)xLabel;
- (id)model;
- (id)init;
- (void)setModel:;
- (void)animationDidStop:finished:;
- (id)backgroundContainer;
- (void).cxx_destruct;
- (void)setBackgroundContainer:;
- (void)setupViews;
- (id)contentLabel;
- (void)setContentLabel:;
@end
