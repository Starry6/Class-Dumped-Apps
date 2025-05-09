@interface UISlidingBarState : NSObject
@property (nonatomic) double leadingWidth;
@property (nonatomic) double trailingWidth;
@property (nonatomic) double supplementaryWidth;
@property (nonatomic) double leadingOffscreenWidth;
@property (nonatomic) double trailingOffscreenWidth;
@property (nonatomic) double supplementaryOffscreenWidth;
@property (nonatomic) double leadingDragOffset;
@property (nonatomic) double trailingDragOffset;
@property (nonatomic) double supplementaryDragOffset;
@property (nonatomic) double mainWidth;
@property (nonatomic) UISlidingBarConfiguration configuration;
@property (nonatomic) double _leadingOverlayWidth;
@property (nonatomic) BOOL _treatLeadingHiddenAsOverlaps;
@property (nonatomic) double _trailingOverlayWidth;
@property (nonatomic) BOOL _treatTrailingHiddenAsOverlaps;
@property (nonatomic) double _supplementaryOverlayWidth;
@property (nonatomic) BOOL _treatSupplementaryHiddenAsOverlaps;
@property (nonatomic) double _rubberBandInset;
@property (nonatomic) double _keyboardAdjustment;
@property (nonatomic) q _collapsedState;
@property (nonatomic) BOOL leadingOverlapsMain;
@property (nonatomic) BOOL trailingOverlapsMain;
@property (nonatomic) BOOL supplementaryOverlapsMain;
@property (nonatomic) BOOL collapsed;
@property (nonatomic) BOOL isLeadingVisible;
@property (nonatomic) BOOL isTrailingVisible;
@property (nonatomic) BOOL isSupplementaryVisible;
- (id)stateRequest;
- (void)_setCollapsedState:;
- (BOOL)_trailingEntirelyOverlapsMain;
- (double)_leadingOverlayWidth;
- (void)setSupplementaryDragOffset:;
- (BOOL)_leadingEntirelyOverlapsMain;
- (void)_setTreatSupplementaryHiddenAsOverlaps:;
- (void)setMainWidth:;
- (double)mainWidth;
- (double)supplementaryWidth;
- (void)setLeadingOffscreenWidth:;
- (double)leadingOffscreenWidth;
- (void)setTrailingDragOffset:;
- (void)set_keyboardAdjustment:;
- (BOOL)leadingOverlapsMain;
- (void)setLeadingWidth:;
- (double)trailingDragOffset;
- (double)leadingDragOffset;
- (void)setConfiguration:;
- (void)setLeadingDragOffset:;
- (unsigned long long)hash;
- (void)_setLeadingOverlayWidth:;
- (double)_trailingOverlayWidth;
- (double)leadingWidth;
- (BOOL)_supplementaryEntirelyOverlapsMain;
- (BOOL)_treatTrailingHiddenAsOverlaps;
- (id)_configuration;
- (BOOL)_shouldUseSlidingBars;
- (BOOL)isCollapsed;
- (BOOL)_treatSupplementaryHiddenAsOverlaps;
- (void)_setTreatLeadingHiddenAsOverlaps:;
- (double)supplementaryDragOffset;
- (double)_rubberBandInset;
- (void)setSupplementaryOffscreenWidth:;
- (void)set_rubberBandInset:;
- (void)_setTreatTrailingHiddenAsOverlaps:;
- (id)configuration;
- (void)setTrailingOffscreenWidth:;
- (void).cxx_destruct;
- (id)_interactiveStateRequest;
- (double)trailingWidth;
- (long long)_collapsedState;
- (void)_setSupplementaryOverlayWidth:;
- (double)_distanceFromRequest:;
- (BOOL)isSupplementaryVisible;
- (void)setTrailingWidth:;
- (id)description;
- (BOOL)trailingOverlapsMain;
- (BOOL)isTrailingVisible;
- (void)_setTrailingOverlayWidth:;
- (BOOL)isLeadingVisible;
- (double)_keyboardAdjustment;
- (BOOL)supplementaryOverlapsMain;
- (BOOL)_treatLeadingHiddenAsOverlaps;
- (double)supplementaryOffscreenWidth;
- (double)trailingOffscreenWidth;
- (BOOL)isEqual:;
- (BOOL)matchesRequest:;
- (void)setSupplementaryWidth:;
- (double)_supplementaryOverlayWidth;
- (id)copyWithZone:;
- (double)_absoluteDistanceFromRequest:;
@end
