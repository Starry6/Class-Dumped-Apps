@interface AWEFeedListenFeedController : AWEBaseController
@property (nonatomic) AWEListenFeedPlayModel tempPlayModel;
@property (nonatomic) double beginPredictTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)insertListenFeedAwemeModel:playModel:;
- (id)getCurrentTabDataController;
- (id)shouldPreventPlayAfterPlayStateChanged;
- (void)setTempPlayModel:;
- (id)tempPlayModel;
- (BOOL)canHandleCurrentAwemeByListenFeed;
- (double)beginPredictTime;
- (void)setBeginPredictTime:;
- (id)__currentPlayerViewController;
- (void)configListenFeedDefaultSeekToTimeIfNeeded:model:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
@end
