@interface UITextRangeView : UIView
@property (nonatomic) UISelectionGrabberCustomPath startCustomPath;
@property (nonatomic) UISelectionGrabberCustomPath endCustomPath;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} startEdge;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} endEdge;
@property (nonatomic) BOOL magnifying;
@property (nonatomic) BOOL isClearingRange;
@property (nonatomic) BOOL shouldStayVisible;
@property (nonatomic) UITextSelectionView selectionView;
@property (nonatomic) UIResponder<UITextInput> container;
@property (nonatomic) {CGPoint=dd} basePoint;
@property (nonatomic) {CGPoint=dd} extentPoint;
@property (nonatomic) NSInteger mode;
@property (nonatomic) NSArray rects;
@property (nonatomic) BOOL autoscrolled;
@property (nonatomic) BOOL inGesture;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL rotating;
@property (nonatomic) BOOL scaling;
@property (nonatomic) BOOL inputViewIsChanging;
@property (nonatomic) BOOL baseIsStart;
@property (nonatomic) BOOL commandsWereShowing;
@property (nonatomic) UISelectionGrabber startGrabber;
@property (nonatomic) UISelectionGrabber endGrabber;
@property (nonatomic) {CGPoint=dd} initialExtentPoint;
@property (nonatomic) BOOL animateUpdate;
@property (nonatomic) {CGPoint=dd} activeTouchPoint;
@property (nonatomic) BOOL willBeginMagnifying;
@property (nonatomic) BOOL areSelectionRectsVisible;
@property (nonatomic) UITextRangeAdjustmentInteraction adjustmentInteraction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)willRotate;
- (void)didRotate;
- (void)prepareForMagnification;
- (void)setBaseIsStart:;
- (void)removeFromSuperview;
- (id)activeTouchPoint;
- (void)updateDots;
- (BOOL)shouldStayVisible;
- (id)initWithFrame:selectionView:;
- (id)selectionView;
- (BOOL)autoscrolled;
- (BOOL)_endIsHorizontal;
- (BOOL)willBeginMagnifying;
- (id)_selectionClipRect;
- (BOOL)inGesture;
- (void)setMagnifying:;
- (BOOL)isClearingRange;
- (void)setMagnifierOrientation;
- (void)beginMagnifying;
- (void)_cancelGrabberTransitionOutAnimations:;
- (void)setStartEdge:;
- (void)updateBaseAndExtentPointsFromEdges;
- (id)convertFromMagnifierPoint:;
- (void)textRangeAdjustmentInteraction:didBeginAtPoint:;
- (BOOL)baseIsStart;
- (void)updateEdges;
- (void)setEndCustomPath:;
- (id)endEdge;
- (void)cancelDelayedActions;
- (BOOL)pointInside:withEvent:;
- (id)container;
- (id)pointerInteraction:regionForRequest:defaultRegion:;
- (id)startCustomPath;
- (id)applyTouchOffset:;
- (void)textRangeAdjustmentInteraction:didEndAtPoint:;
- (void)updateBaseIsStartWithDocumentPoint:;
- (void)setInputViewIsChanging:;
- (id)endCustomPath;
- (BOOL)scaling;
- (id)adjustmentInteraction;
- (BOOL)inputViewIsChanging;
- (BOOL)isScrolling;
- (id)endGrabber;
- (void)setScaling:;
- (void)startAnimating;
- (void)scaleDidChange;
- (BOOL)pointCloserToEnd:startEdge:endEdge:;
- (id)startGrabber;
- (id)containerCoordinateSpaceForTextRangeAdjustmentInteraction:;
- (void)setInGesture:;
- (void)stopAnimating;
- (void)setRotating:;
- (id)pointerInteraction:styleForRegion:;
- (void)setCommandsWereShowing:;
- (void)_updateGrabbersVisibility:animated:;
- (void)animateHighlighterExpanderOnLayer:withOffset:;
- (BOOL)commandsWereShowing;
- (void)doneMagnifying;
- (void)setEndEdge:;
- (void)textRangeAdjustmentInteraction:selectionMoved:withTouchPoint:;
- (id)magnifierPoint;
- (void)setAdjustmentInteraction:;
- (id)_startEdgeHitRectWithPrecision:;
- (void)setEndGrabber:;
- (void)scaleWillChange;
- (BOOL)_startIsHorizontal;
- (id)caretRectForTextRangeAdjustmentInteraction:;
- (void)inputViewDidChange;
- (void)inputViewWillChange;
- (void)setStartGrabber:;
- (void)updateAfterEffectiveModeChange;
- (void).cxx_destruct;
- (void)setWillBeginMagnifying:;
- (id)startEdge;
- (id)_edgeHitRectForEdgeRect:grabber:precision:;
- (BOOL)rotating;
- (id)basePoint;
- (void)setRects:;
- (void)willScroll;
- (BOOL)magnifying;
- (void)animateHighlighterExpanderAnimation;
- (void)updateGrabbers;
- (BOOL)gestureRecognizerShouldBegin:;
- (BOOL)animateUpdate;
- (void)setIsClearingRange:;
- (void)setInitialExtentPoint:;
- (void)animateHighlighterDelayedFadeInOnLayer:;
- (BOOL)_gestureRecognizerShouldReceiveTouch:;
- (int)mode;
- (void)updateSelectionWithDocumentPoint:;
- (void)didScroll;
- (id)initialExtentPoint;
- (id)_endEdgeHitRectWithPrecision:;
- (void)setStartCustomPath:;
- (id)extentPoint;
- (void)updateRectViews;
- (void)setShouldStayVisible:;
- (void)setIsScrolling:;
- (void)textRangeAdjustmentInteractionWasCancelled:;
- (BOOL)shouldShowGrabbers;
- (void)setMode:;
- (void)clearRangeAnimated:;
- (void)setAnimateUpdate:;
- (BOOL)shouldHitTestGrabbers;
- (id)rects;
- (BOOL)areSelectionRectsVisible;
@end
