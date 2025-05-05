@interface UIPDFTextRangeWidget : NSObject
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
- (id)description;
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
- (void)layoutStartSelectionGrabber:transform:width:extraHeight:unitSize:;
- (void)layoutEndSelectionGrabber:transform:width:extraHeight:unitSize:;
- (void)layoutWidget;
@end
