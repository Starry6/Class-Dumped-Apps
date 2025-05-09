@interface MKMarkerAnnotationView : MKAnnotationView
@property (nonatomic) MKWalletMerchantStylingInfo walletMerchantStylingInfo;
@property (nonatomic) UIColor markerStrokeTintColor;
@property (nonatomic) double markerStrokeWidth;
@property (nonatomic) UIView selectedContentView;
@property (nonatomic) GEOFeatureStyleAttributes styleAttributes;
@property (nonatomic) q titleVisibility;
@property (nonatomic) q subtitleVisibility;
@property (nonatomic) UIColor markerTintColor;
@property (nonatomic) UIColor glyphTintColor;
@property (nonatomic) NSString glyphText;
@property (nonatomic) UIImage glyphImage;
@property (nonatomic) UIImage selectedGlyphImage;
@property (nonatomic) BOOL animatesWhenAdded;
- (id)_styleAttributes;
- (void)setAnnotation:;
- (id)selectedGlyphImage;
- (void)dealloc;
- (void)layoutSublayersOfLayer:;
- (void)prepareForSnapshotting;
- (id)glyphTintColor;
- (void)setFrame:;
- (void)layoutSubviews;
- (void)setGlyphImage:;
- (id)glyphImage;
- (void)_updateStyle;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:;
- (id)alignmentRectInsets;
- (void)prepareForDisplay;
- (id)sizeThatFits:;
- (void)setSelectedGlyphImage:;
- (void).cxx_destruct;
- (void)setGlyphTintColor:;
- (void)_setSelected:animated:;
- (int)_blendMode;
- (BOOL)canShowCallout;
- (void)_updateFromMap;
- (id)initWithAnnotation:reuseIdentifier:;
- (void)_unhideForDisplay;
- (void)setDragState:animated:;
- (BOOL)updateCalloutViewIfNeededAnimated:;
- (BOOL)_hasDataRequiringCallout;
- (void)setMarkerTintColor:;
- (void)_setStyleAttributes:;
- (id)_effectiveMarkerTintColorForState:;
- (double)_effectiveShadowAlphaForState:;
- (void)setMarkerStrokeTintColor:;
- (void)setMarkerStrokeWidth:;
- (void)setSelectedContentView:;
- (id)selectedContentView;
- (double)_effectiveMarkerStrokeWidthForState:;
- (id)_effectiveMarkerStrokeTintColorForState:;
- (id)_effectiveGlyphTintColorForState:;
- (id)_effectiveGlyphImageForState:isSystemProvided:;
- (void)setGlyphText:;
- (id)_effectiveGlyphText;
- (void)setTitleVisibility:;
- (void)setSubtitleVisibility:;
- (void)_updateContentForState:;
- (void)_updateContentForState:forceUpdate:;
- (long long)_currentMarkerState;
- (id)_metricsForState:;
- (void)_configureViewsForState:usesCallout:animated:;
- (void)_setShadowAlpha:transform:duration:;
- (long long)_stateForIsSelected:;
- (void)_didDragWithVelocity:;
- (void)_setupNormalViewsIfNeeded;
- (void)_setupSelectedViewsIfNeededUsesCallout:;
- (void)_configureAnimated:fromState:toState:;
- (void)_swayAnimation;
- (BOOL)_shouldRenderGradient;
- (BOOL)_shouldDeselectWhenDragged;
- (BOOL)isProvidingCustomFeature;
- (id)_effectiveSubtitlesIsCollidable:;
- (id)_defaultCollisionAlignmentRectInsets;
- (id)markerTintColor;
- (id)glyphText;
- (BOOL)animatesWhenAdded;
- (void)setAnimatesWhenAdded:;
- (id)markerStrokeTintColor;
- (double)markerStrokeWidth;
- (id)_walletMerchantStylingInfo;
- (void)_setWalletMerchantStylingInfo:;
+ (Class)_mapkitLeafClass;
+ (float)_defaultDisplayPriority;
@end
