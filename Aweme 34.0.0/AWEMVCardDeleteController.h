@interface AWEMVCardDeleteController : AWEDCFeedBaseController
@property (nonatomic) NSMutableArray waitDeleteAwemeArray;
- (void)containerViewDidAppear:;
- (void)awemeDeleteNotificationHandler:;
- (void)removeWaitDeleteAwemeArray;
- (id)waitDeleteAwemeArray;
- (void)setWaitDeleteAwemeArray:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setupNotification;
@end
