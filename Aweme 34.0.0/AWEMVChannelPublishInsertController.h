@interface AWEMVChannelPublishInsertController : AWEMVChannelBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didEndWithResult:error:;
- (void)insertAfterPublished:;
- (BOOL)shouldInsert;
- (id)createInsertIndexPathByIsPending:enterModel:;
- (void)dealloc;
- (void)viewDidLoad;
@end
