@interface AWEDCFeedPlaceholderController : AWEDCFeedBaseController
@property (nonatomic) AWEDCFeedPlaceholderManager manager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)containerScrollViewDidEndDragging:willDecelerate:;
- (void)containerScrollViewDidEndDecelerating:;
- (void)containerScrollViewDidEndScrollingAnimation:;
- (void)onFetchListDataEndWithReason:response:error:;
- (void)onLoadMoreListDataEndWithReason:response:error:;
- (void)loadPlaceholderDataCompletion:;
- (void)cacheAwemeModels:;
- (void)cachePlaceholderData;
- (void)applicationWillTerminateFromNoti;
- (void)appDidEnterBackgroundFromNoti;
- (void)updateRecordStartIndex;
- (void)setManager:;
- (void)dealloc;
- (id)manager;
- (void).cxx_destruct;
- (void)containerViewDidLoad;
@end
