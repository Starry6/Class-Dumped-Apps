@interface AWEAwemeDetailTableView : AWEFeedDataSafeTableView
@property (nonatomic) AWEAwemeDetailTableViewController containerVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setContainerVC:;
- (id)containerVC;
- (BOOL)enableFeedDataRecover;
- (void)reportDataInconsistency:;
- (void)reloadData;
- (void)performBatchUpdates:completion:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)endUpdates;
- (void).cxx_destruct;
- (void)beginUpdates;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
+ (BOOL)awe_shouldFixAccessibilityScroll;
@end
