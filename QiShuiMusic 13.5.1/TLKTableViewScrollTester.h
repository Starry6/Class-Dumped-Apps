@interface TLKTableViewScrollTester : NSObject
@property (nonatomic) @? completion;
@property (nonatomic) @? firstScroll;
@property (nonatomic) UIScrollView tableView;
@property (nonatomic) BOOL directionUp;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL finishedFirstScroll;
@property (nonatomic) double scrollTime;
- (id)completion;
- (void)setCompletion:;
- (id)init;
- (void)fire:;
- (void)setStartTime:;
- (double)startTime;
- (void).cxx_destruct;
- (void)setTableView:;
- (id)tableView;
- (void)performScrollTestOnTableView:completion:;
- (void)performScrollTestOnTableView:firstScroll:completion:;
- (void)finishFirstScrollIfNeeded;
- (double)scrollTime;
- (void)setScrollTime:;
- (id)firstScroll;
- (void)setFirstScroll:;
- (BOOL)directionUp;
- (void)setDirectionUp:;
- (BOOL)finishedFirstScroll;
- (void)setFinishedFirstScroll:;
@end
