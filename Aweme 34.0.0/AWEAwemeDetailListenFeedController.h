@interface AWEAwemeDetailListenFeedController : AWEAwemeNewDetailBaseController
@property (nonatomic) AWEListenFeedPlayModel tempPlayModel;
@property (nonatomic) double beginPredictTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:atIndexPath:tableView:;
- (void)setTempPlayModel:;
- (id)tempPlayModel;
- (BOOL)canHandleCurrentAwemeByListenFeed;
- (void)exitFromListenFeedWithAwemeModel:playModel:;
- (double)beginPredictTime;
- (void)setBeginPredictTime:;
- (void).cxx_destruct;
@end
