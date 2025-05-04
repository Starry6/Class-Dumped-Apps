@interface AWESchoolListDataController : AWEListDataController
@property (nonatomic) NSNumber cursor;
- (void)loadMoreWithCompletion:;
- (id)p_invalidParameterError;
- (id)p_requestParameter;
- (void)p_fetchSchoolArrayWithParameter:completion:;
- (id)cursor;
- (id)init;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)copyWithZone:;
@end
