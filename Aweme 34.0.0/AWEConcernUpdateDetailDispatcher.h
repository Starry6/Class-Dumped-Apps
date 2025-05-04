@interface AWEConcernUpdateDetailDispatcher : AWEAwemeNewDetailBaseController
@property (nonatomic) BOOL isFingerSliding;
@property (nonatomic) <AWEConcernUpdateDetailDispatcherDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerTableViewCell:;
- (void)scrollViewDidScrollEndWithActive;
- (void)onScrollDidEndWithIndexPath:;
- (void)initialDataSourceFetchDidFinished;
- (void)onScrollWillChangeVideo:index:directTop:;
- (void)configCell:atIndexPath:tableView:;
- (void)setIsFingerSliding:;
- (BOOL)isFingerSliding;
- (BOOL)isFromUpdateDetail:;
- (id)delegate;
- (void)scrollViewWillBeginDragging:;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
