@interface AWEFeedBatchManagerAwemeStatController : AWEBaseController
- (BOOL)enableOptimize;
- (void)handleDiggBatchCancelNotification:;
- (void)handleFavoriteBatchCancelNotification:;
- (id)allAwemeModels;
- (void)viewDidLoad;
@end
