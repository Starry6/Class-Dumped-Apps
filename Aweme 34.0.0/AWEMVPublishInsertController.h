@interface AWEMVPublishInsertController : AWEDCFeedBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didEndWithResult:error:;
- (id)mvContext;
- (void)insertAfterPublished:;
- (BOOL)shouldInsert;
- (id)createInsertIndexPathByIsPending:enterModel:;
- (void)dealloc;
- (void)containerViewDidLoad;
@end
