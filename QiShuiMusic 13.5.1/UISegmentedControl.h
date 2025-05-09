@interface UISegmentedControl : UIControl
@property (nonatomic) UIView removedSegment;
@property (nonatomic) UILongPressGestureRecognizer axLongPressGestureRecognizer;
@property (nonatomic) _UIHostedFocusSystem internalFocusSystem;
@property (nonatomic) BOOL useDynamicShadow;
@property (nonatomic) BOOL animatingOutDynamicShadow;
@property (nonatomic) NSInteger controlSize;
@property (nonatomic) q segmentedControlStyle;
@property (nonatomic) BOOL momentary;
@property (nonatomic) Q numberOfSegments;
@property (nonatomic) BOOL apportionsSegmentWidthsByContent;
@property (nonatomic) q selectedSegmentIndex;
@property (nonatomic) UIColor selectedSegmentTintColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rac_newSelectedSegmentIndexChannelWithNilValue:;
- (long long)_mapkit_numberOfSegments;
- (long long)_mapkit_selectedSegmentIndex;
- (void)_mapkit_setSelectedSegmentIndex:;
- (void)_mapkit_removeAllSegments;
- (void)_mapkit_setTitle:forSegmentAtIndex:insertIfNeeded:;
- (id)initWithItems:;
- (void)sizeToFit;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_baselineOffsetsAtSize:;
- (long long)barStyle;
- (void)pressesCancelled:withEvent:;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (long long)adaptivePresentationStyleForPresentationController:traitCollection:;
- (void)dealloc;
- (id)_intrinsicSizeWithinSize:;
- (int)controlSize;
- (BOOL)canBecomeFocused;
- (void)touchesBegan:withEvent:;
- (void)setFrame:;
- (void)layoutSubviews;
- (void)_updateSelectionIndicator;
- (void)animationDidStop:finished:;
- (void)setDelegate:;
- (void)setAlpha:;
- (id)pointerInteraction:regionForRequest:defaultRegion:;
- (void)setControlSize:;
- (BOOL)isSpringLoaded;
- (void)_didMoveFromWindow:toWindow:;
- (void)_updateDynamicShadow:animated:;
- (void)setTitleTextAttributes:forState:;
- (void)setSpringLoaded:;
- (id)viewForLastBaselineLayout;
- (void)_setBackgroundImage:forState:barMetrics:;
- (void)pointerInteraction:willExitRegion:animator:;
- (void)_highlightSegment:;
- (id)initWithCoder:;
- (void)_setBackgroundVerticalPositionAdjustment:forBarMetrics:;
- (void)pressesChanged:withEvent:;
- (void)_setNeedsAppearanceUpdate;
- (id)titleTextAttributesForState:;
- (double)_barHeight;
- (void)pointerInteraction:willEnterRegion:animator:;
- (id)frame;
- (void)_setTitleTextAttributes:forState:;
- (BOOL)pointMostlyInside:withEvent:;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (void)pressesEnded:withEvent:;
- (BOOL)useBlockyMagnificationInClassic;
- (void)encodeWithCoder:;
- (id)alignmentRectInsets;
- (id)pointerInteraction:styleForRegion:;
- (BOOL)isMomentary;
- (id)sizeThatFits:;
- (void)pressesBegan:withEvent:;
- (void)setBounds:;
- (void)setMomentary:;
- (void)setEnabled:;
- (double)_backgroundVerticalPositionAdjustmentForBarMetrics:;
- (void).cxx_destruct;
- (id)_tintColorArchivingKey;
- (id)_viewToAddFocusLayer;
- (id)_basicAnimationForView:withKeyPath:;
- (void)setBarStyle:;
- (long long)adaptivePresentationStyleForPresentationController:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)didUpdateFocusInContext:withAnimationCoordinator:;
- (void)updateForMiniBarState:;
- (id)bounds;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (id)_defaultFocusEffect;
- (void)setAdjustsForContentSizeCategory:;
- (void)removeAllSegments;
- (void)touchesCancelled:withEvent:;
- (void)setBackgroundImage:forState:barMetrics:;
- (id)backgroundImageForState:barMetrics:;
- (BOOL)shouldTrack;
- (void)_diagnoseFocusabilityForReport:;
- (id)_viewForLoweringBaselineLayoutAttribute:;
- (void)_axLongPressHandler:;
- (void)_clearSelectedSegment;
- (void)_selectFocusedSegment;
- (id)_preferredFocusEnvironmentsForFocusSystem:;
- (void)_focusSystem:didFinishUpdatingFocusInContext:;
- (id)_focusMapContainerForFocusSystem:;
- (BOOL)_focusSystem:containsChildOfHostEnvironment:;
- (BOOL)apportionsSegmentWidthsByContent;
- (void)setApportionsSegmentWidthsByContent:;
- (void)_installVisualStyleDefaults;
- (void)_commonSegmentedControlInit;
- (void)__initWithFrameCommonOperations;
- (id)initWithFrame:actions:;
- (void)_resetForAppearanceChange;
- (void)_setNeedsBackgroundAndContentViewUpdate;
- (void)_setSegmentedControlAppearance:;
- (void)_setAppearanceIsTiled:leftCapWidth:rightCapWidth:;
- (long long)segmentedControlStyle;
- (void)setSegmentedControlStyle:;
- (void)_setControlSize:andInvalidate:;
- (long long)segmentControlStyle;
- (void)setSegmentControlStyle:;
- (void)_setAutosizeText:;
- (void)setTransparentBackground:;
- (BOOL)transparentBackground;
- (BOOL)adjustsForContentSizeCategory;
- (BOOL)_useDynamicShadow;
- (void)_setAnimatingOutDynamicShdaow:;
- (BOOL)_animatingOutDynamicShadow;
- (BOOL)_usesNewAnimations;
- (void)_setUsesNewAnimations:;
- (void)insertSegmentWithTitle:atIndex:animated:;
- (void)insertSegmentWithImage:atIndex:animated:;
- (void)insertSegmentWithAction:atIndex:animated:;
- (void)_insertSegmentWithAttributedTitle:atIndex:animated:;
- (id)_accessibilitySegmentItemAtIndex:;
- (void)removeSegmentAtIndex:animated:;
- (void)setTitle:forSegmentAtIndex:;
- (id)titleForSegmentAtIndex:;
- (void)_setAction:forSegmentAtIndex:;
- (void)setAction:forSegmentAtIndex:;
- (id)actionForSegmentAtIndex:;
- (long long)segmentIndexForActionIdentifier:;
- (void)_setAttributedTitle:forSegmentAtIndex:;
- (id)_attributedTitleForSegmentAtIndex:;
- (void)setImage:forSegmentAtIndex:;
- (id)imageForSegmentAtIndex:;
- (void)setWidth:forSegmentAtIndex:;
- (double)widthForSegmentAtIndex:;
- (void)setContentOffset:forSegmentAtIndex:;
- (id)contentOffsetForSegmentAtIndex:;
- (void)setEnabled:forSegmentAtIndex:;
- (BOOL)isEnabledForSegmentAtIndex:;
- (BOOL)_shouldSelectSegmentAtIndex:;
- (unsigned long long)numberOfSegments;
- (long long)selectedSegmentIndex;
- (void)setSelectedSegmentIndex:;
- (void)_setSelectedSegmentIndex:notify:;
- (void)_setSelectedSegmentIndex:notify:animate:;
- (void)_emitValueChanged;
- (void)_sendValueChanged;
- (void)_animateContentChangeWithAnimations:completion:;
- (void)_setSelected:highlighted:forSegmentAtIndex:forceInfoDisplay:;
- (void)_setSelected:forSegmentAtIndex:forceInfoDisplay:;
- (void)_updateAxLongPressGestureRecognizer;
- (BOOL)_disableSlidingControl;
- (long long)_segmentIndexToHighlight:;
- (void)_insertSelectionViewForSegment:;
- (void)_updateSelectionToSegment:highlight:shouldAnimate:sameSegment:;
- (void)_setHighlightedSegmentHighlighted:;
- (void)_setHoverOnSegment:hovered:;
- (void)hoverOffSegment:;
- (void)hoverOnSegment:;
- (id)_segmentAtIndex:;
- (int)_closestSegmentIndexAtPoint:;
- (void)_tapSegmentAtPoint:touchDown:;
- (BOOL)_shouldConsumeEventWithPresses:;
- (void)_setEnabled:forcePropagateToSegments:;
- (void)_setAlwaysEmitValueChanged:;
- (BOOL)_alwaysEmitValueChanged;
- (void)setSelectedSegmentTintColor:;
- (id)selectedSegmentTintColor;
- (void)_setSelectedSegmentVibrancyEffect:;
- (id)_selectedSegmentVibrancyEffect;
- (void)_setBackgroundTintColor:;
- (id)_backgroundTintColor;
- (void)_setInterSegmentSpacing:;
- (double)_interSegmentSpacing;
- (BOOL)_hasEnabledSegment;
- (void)_sendDelayedFocusActionIfNecessary;
- (void)_cancelDelayedFocusAction;
- (id)_internalFocusSystem;
- (void)_setDividerImage:forLeftSegmentState:rightSegmentState:barMetrics:;
- (void)setDividerImage:forLeftSegmentState:rightSegmentState:barMetrics:;
- (id)dividerImageForLeftSegmentState:rightSegmentState:barMetrics:;
- (void)setContentPositionAdjustment:forSegmentType:barMetrics:;
- (id)contentPositionAdjustmentForSegmentType:barMetrics:;
- (id)_badgeValueForSegmentAtIndex:;
- (void)_setBadgeValue:forSegmentAtIndex:;
- (id)_createSegmentAtIndex:position:withInfo:;
- (id)_createAndAddSegmentAtIndex:position:withInfo:;
- (void)_insertSegment:withInfo:animated:;
- (void)_updateDividerImageForSegmentAtIndex:;
- (id)_uiktest_labelsWithState:;
- (id)_uiktest_segmentAtIndex:;
- (id)removedSegment;
- (void)setRemovedSegment:;
- (id)axLongPressGestureRecognizer;
- (void)setAxLongPressGestureRecognizer:;
- (id)infoViewForSegment:;
- (id)initWithFrame:withStyle:withItems:;
- (void)setAlwaysNotifiesDelegateOfSegmentClicks:;
- (void)setImagePadding:forSegment:;
- (void)selectSegment:;
- (void)addSegmentWithTitle:;
- (void)insertSegment:withTitle:animated:;
- (void)insertSegment:withImage:animated:;
- (void)removeSegment:animated:;
- (void)setTitle:forSegment:;
- (id)titleForSegment:;
- (void)setImage:forSegment:;
- (id)imageForSegment:;
- (void)setWidth:forSegment:;
- (float)widthForSegment:;
- (void)setContentOffset:forSegment:;
- (id)contentOffsetForSegment:;
- (void)setEnabled:forSegment:;
- (BOOL)isEnabledForSegment:;
- (void)setSelectedSegment:;
- (long long)selectedSegment;
+ (BOOL)automaticallyNotifiesObserversForKey:;
+ (double)_sectionIndicatorInsetForTraitCollection:size:;
+ (double)_cornerRadiusForTraitCollection:size:;
+ (double)defaultHeight;
+ (double)_defaultHeight;
+ (void)_registerStyleProvider:forIdiom:;
+ (double)_defaultHeightForIdiom:size:;
+ (double)_defaultHeightForTraitCollection:size:;
+ (double)_defaultHeightForTraitCollection:;
+ (double)defaultHeightForStyle:size:;
+ (double)defaultHeightForStyle:;
+ (id)_selectionFrameForBounds:size:traitCollection:accessibilityView:;
+ (id)_hiddenSelectionTransformForTraitCollection:;
+ (id)_highlightSelectionTransformForTraitCollection:;
+ (id)_selectionPopAnimationForKey:fromValue:toValue:;
+ (id)_selectionOpacityAnimationFromValue:toValue:;
+ (BOOL)_updateDynamicShadowView:withAnimationDelegate:useDynamicShadow:animated:;
+ (double)_selectionOffsetAdjustmentForSegment:;
+ (BOOL)_selectFocusedSegmentAfterFocusUpdateForTraitCollection:;
+ (id)_backgroundPrimaryColorSelected:highlighted:traitCollection:tintColor:;
+ (BOOL)_useShadowForSelectedTintColor:traitCollection:;
+ (id)_modernBackgroundSelected:disableShadow:maximumSize:highlighted:traitCollection:tintColor:size:;
+ (id)_dividerPrimaryColorBackground:traitCollection:tintColor:;
+ (id)_modernDividerImageBackground:traitCollection:tintColor:size:;
+ (double)_sectionIndicatorOverflowForTraitCollection:size:;
+ (double)_lineWidthForTraitCollection:size:;
+ (double)_dividerWidthForTraitCollection:size:;
+ (id)_fontForTraitCollection:size:selected:;
@end
