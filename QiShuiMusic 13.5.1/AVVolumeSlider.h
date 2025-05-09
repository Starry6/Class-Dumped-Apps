@interface AVVolumeSlider : UISlider
@property (nonatomic) UIImageView thumbView;
@property (nonatomic) BOOL hasChangedLocationAtLeastOnce;
@property (nonatomic) BOOL scrubsWhenTappedAnywhere;
@property (nonatomic) BOOL animatingVolumeChange;
@property (nonatomic) double thumbSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) {CGSize=dd} extrinsicContentSize;
@property (nonatomic) BOOL removed;
@property (nonatomic) BOOL collapsed;
@property (nonatomic) BOOL included;
@property (nonatomic) BOOL collapsedOrExcluded;
@property (nonatomic) BOOL hasAlternateAppearance;
@property (nonatomic) BOOL hasFullScreenAppearance;
@property (nonatomic) AVLayoutItemAttributes layoutAttributes;
- (void)_commonInit;
- (void)setHasAlternateAppearance:;
- (void)_updateLayoutItem;
- (id)trackRectForBounds:;
- (BOOL)beginTrackingWithTouch:withEvent:;
- (void)setValue:animated:;
- (id)thumbView;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (id)thumbRectForBounds:trackRect:value:;
- (void)_endTracking;
- (id)accessibilityLabel;
- (BOOL)pointInside:withEvent:;
- (id)createThumbView;
- (id)minimumSize;
- (id)hitRect;
- (void)setCollapsed:;
- (BOOL)isCollapsed;
- (id)initWithFrame:;
- (id)alignmentRectInsets;
- (void)setIncluded:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setHasFullScreenAppearance:;
- (void)setExtrinsicContentSize:;
- (id)layoutAttributes;
- (BOOL)isIncluded;
- (id)extrinsicContentSize;
- (BOOL)gestureRecognizerShouldBegin:;
- (BOOL)isCollapsedOrExcluded;
- (void)layoutAttributesDidChange;
- (BOOL)hasAlternateAppearance;
- (void)cancelTrackingWithEvent:;
- (void)setRemoved:;
- (BOOL)hasFullScreenAppearance;
- (void)endTrackingWithTouch:withEvent:;
- (BOOL)isRemoved;
- (BOOL)continueTrackingWithTouch:withEvent:;
- (void)setThumbView:;
- (BOOL)avkit_shouldPreventExternalGestureRecognizerAtPoint:;
- (BOOL)_shouldTrackTouchAtPoint:;
- (BOOL)scrubsWhenTappedAnywhere;
- (void)setScrubsWhenTappedAnywhere:;
- (BOOL)hasChangedLocationAtLeastOnce;
- (void)setHasChangedLocationAtLeastOnce:;
- (id)initWithFrame:thumbSize:;
- (BOOL)isAnimatingVolumeChange;
- (void)setAnimatingVolumeChange:;
- (double)thumbSize;
- (void)setThumbSize:;
@end
