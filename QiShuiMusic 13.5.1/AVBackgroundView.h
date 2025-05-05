@interface AVBackgroundView : UIView
@property (nonatomic) AVLayoutView layoutView;
@property (nonatomic) BOOL automaticallyDrawsRoundedCorners;
@property (nonatomic) BOOL prefersLowQualityEffects;
@property (nonatomic) BOOL circular;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)addSubview:applyingMaterialStyle:tintEffectStyle:;
- (BOOL)isCircular;
- (BOOL)prefersLowQualityEffects;
- (BOOL)automaticallyDrawsRoundedCorners;
- (id)layoutView;
- (id)initWithFrame:;
- (void)setCircular:;
- (void)_ensureOrRemoveLayoutView;
- (void)_updateBackdropShape;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setPrefersLowQualityEffects:;
- (BOOL)_isContainedInOverlappingBackgroundView;
- (void)setAutomaticallyDrawsRoundedCorners:;
- (void)setLayoutView:;
@end
