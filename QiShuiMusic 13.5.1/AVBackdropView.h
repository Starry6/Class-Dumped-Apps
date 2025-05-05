@interface AVBackdropView : AVView
+ (void)configureView:forTintEffectWithColor:filterType:;
+ (void)applyBaseTrackTintToView:;
+ (void)removeAllFiltersFromView:;
+ (id)secondaryMaterialOverlayView;
+ (void)applyGlyphTintColor:toView:;
+ (void)applyCompletedTrackTintToView:;
+ (void)applyLoadedTrackTintToView:;
+ (void)configureSlider:thumbView:loadedTrackView:withTimelineMarkers:;
+ (void)applyPrimaryGlyphTintToView:;
+ (id)secondaryGlyphTintColor;
+ (void)configureSlider:thumbView:loadedTrackView:;
+ (void)applySecondaryGlyphTintToView:;
+ (void)configureView:withBackgroundFillOfColor:opacity:filter:;
@end
