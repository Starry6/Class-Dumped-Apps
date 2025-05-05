@interface UIPDFParagraphWidget : NSObject
@property (nonatomic) UIPDFPageView pageView;
@property (nonatomic) {CGPoint=dd} initialSelectionPointOnPage;
@property (nonatomic) {CGPoint=dd} currentSelectionPointOnPage;
- (id)pageView;
- (id)init;
- (void)remove;
- (void)dealloc;
- (void)setSelection:;
- (void)drawLayer:inContext:;
- (void)hide;
- (void)layout;
- (void)track:;
- (BOOL)hitTest:fixedPoint:preceeds:;
- (id)selectedPointFor:;
- (id)viewOffset;
- (void)endTracking;
- (id)selectionRectangle;
- (void)setSelectedGrabber:;
- (id)initialSelectionPointOnPage;
- (id)currentSelectionPointOnPage;
- (void)setPageView:;
- (id)selectionBoundsInEffectsSpace;
- (id)adjustRect:toPoint:;
- (void)setSelectedGrabberPosition:;
@end
