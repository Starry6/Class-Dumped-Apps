@interface AWEPlayInteractionTrackerController : AWEPlayInteractionBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)videoPlayProgressPercentFormatedStr;
- (id)videoTotalPlayTimeMsIgnoreLoopTimes;
- (id)aAWEPlayInteractionAdapter;
- (void)setupJXTransmissionNodeInfo;
- (void)setupBottomBarClickTransmissionNodeInfo;
- (void)setupPostCommentTransmissionNodeInfo;
- (void)setupPreviousPageTransmissionNodeInfo;
- (id)videoTotalPlayTimeMillisecond:;
- (void)viewDidLoad;
- (void)viewDidAppear;
+ (Class)aAWEPlayInteractionAdapterClass;
@end
