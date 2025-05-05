@interface UIIndexBarVisualStyle_LegacyiOS : UIIndexBarVisualStyle_Base
@property (nonatomic) UIColor nonTrackingBackgroundColor;
- (BOOL)overlay;
- (id)initWithView:;
- (void)drawRect:;
- (BOOL)canBecomeFocused;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (id)font;
- (void)willDrawEntryAtIndex:indexBounds:entryBounds:context:originalColor:;
- (void)didDrawEntryAtIndex:indexBounds:entryBounds:context:originalColor:;
- (void)selectedSectionDidChange:;
- (void)trackingDidBegin;
- (void)trackingDidEnd;
- (double)indexWidth;
- (id)_visibleBoundsForRect:stride:;
- (void)displayEntriesUpdated;
- (void)sizeUpdated;
- (BOOL)updateSectionForTouch:withEvent:;
- (id)displayEntryFromEntry:;
- (double)minLineHeight;
- (void)indexColorUpdated;
- (long long)_accessibility_indexForEntryAtPoint:;
- (id)nonTrackingBackgroundColor;
- (void)setNonTrackingBackgroundColor:;
@end
