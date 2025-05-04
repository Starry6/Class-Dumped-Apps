@interface AWEScreenCastInnerListDataController : AWEListDataController
@property (nonatomic) NSNumber offset;
@property (nonatomic) NSNumber nextCursor;
- (void)loadMoreWithCompletion:;
- (id)nextCursor;
- (void)setNextCursor:;
- (void)reloadWithPullType:Completion:;
- (id)initWithAwemeModelList:context:;
- (void)setOffset:;
- (id)offset;
- (void).cxx_destruct;
@end
