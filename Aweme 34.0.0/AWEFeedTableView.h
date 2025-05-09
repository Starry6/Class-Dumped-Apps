@interface AWEFeedTableView : AWEFeedDataSafeTableView
@property (nonatomic) BOOL hasAnyAction;
@property (nonatomic) BOOL shouldAvoidCellForRowCalls;
@property (nonatomic) BOOL isShowAntiAddictMask;
@property (nonatomic) <AWEFeedTableViewDelegate> feedTableViewDelegate;
@property (nonatomic) @? touchBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)visibleCells;
- (BOOL)enableFeedDataRecover;
- (void)reportDataInconsistency:;
- (void)setIsShowAntiAddictMask:;
- (BOOL)hasAnyAction;
- (BOOL)shouldAvoidCellForRowCalls;
- (void)setHasAnyAction:;
- (id)touchBlock;
- (BOOL)isShowAntiAddictMask;
- (id)feedTableViewDelegate;
- (void)setShouldAvoidCellForRowCalls:;
- (void)setFeedTableViewDelegate:;
- (void)setTouchBlock:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)layoutSubviews;
- (id)automationElements;
+ (BOOL)awe_shouldFixAccessibilityScroll;
@end
