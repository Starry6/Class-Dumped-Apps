@interface AWENoActionEventHandler : NSObject
@property (nonatomic) NSMutableSet touches;
@property (nonatomic) NSHashTable ignoreViews;
@property (nonatomic) NSMutableSet ignoreViewClassNames;
@property (nonatomic) NSMutableSet ignoreGestuerRecognizerClassNames;
@property (nonatomic) NSHashTable historyGestureRecognizers;
@property (nonatomic) AWEPOIUITapGestureRecognizer tapGesture;
@property (nonatomic) UIView detectedView;
@property (nonatomic) Q clickState;
@property (nonatomic) Q slideState;
@property (nonatomic) @? completeHandlerWithMessage;
@property (nonatomic) @? clickHandlerWithMessage;
@property (nonatomic) @? slideHandlerWithMessage;
@property (nonatomic) BOOL isDito;
@property (nonatomic) Q style;
@property (nonatomic) BOOL noResponse;
@property (nonatomic) {CGPoint=dd} startPoint;
@property (nonatomic) <AWENoActionEventHandlerDelegate> delegate;
- (void)addIgnoreView:;
- (id)initWithDetectedView:;
- (void)setIsDito:;
- (void)addIgnoreGestuerRecognizerClassNames:;
- (BOOL)isDito;
- (void)setCompleteHandlerWithMessage:;
- (void)setupTapGestureWithView:;
- (void)setDetectedView:;
- (BOOL)hasLoggedClickAndSlideOperation;
- (id)ignoreViewClassNames;
- (id)ignoreGestuerRecognizerClassNames;
- (id)ignoreViews;
- (id)historyGestureRecognizers;
- (BOOL)touchHasMoved:;
- (BOOL)gestureRecognizerContainsIgnoreGestureRecognizer:;
- (BOOL)shouldConsiderateCancelledGestureRecogonizers;
- (BOOL)viewShouldBeIgnored:;
- (void)setTouchHasMoved:hasMoved:;
- (void)setTouchStartY:startY:;
- (void)setTouchStartX:startX:;
- (void)updateWithUITouch:previousStatus:;
- (BOOL)hasLoggedClickOperation;
- (BOOL)hasLoggedSlideOperation;
- (id)completeHandlerWithMessage;
- (id)clickHandlerWithMessage;
- (void)setClickState:;
- (id)slideHandlerWithMessage;
- (void)setSlideState:;
- (id)detectedView;
- (unsigned long long)clickState;
- (double)touchStartY:;
- (double)touchStartX:;
- (void)addIgnoreViewClassNames:;
- (void)setClickHandlerWithMessage:;
- (void)setSlideHandlerWithMessage:;
- (BOOL)noResponse;
- (void)setNoResponse:;
- (void)setIgnoreViews:;
- (void)setIgnoreViewClassNames:;
- (void)setIgnoreGestuerRecognizerClassNames:;
- (void)setHistoryGestureRecognizers:;
- (void)setStartPoint:;
- (id)init;
- (id)delegate;
- (void)logEvent:;
- (id)startPoint;
- (id)touches;
- (unsigned long long)style;
- (void).cxx_destruct;
- (void)sendEvent:;
- (void)setDelegate:;
- (void)setStyle:;
- (id)tapGesture;
- (void)setTapGesture:;
- (void)setTouches:;
- (unsigned long long)slideState;
@end
