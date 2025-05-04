@interface AWESchoolSearchDataController : AWEListDataController
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSString keywords;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loadMoreWithCompletion:;
- (id)p_invalidParameterError;
- (id)p_requestParameter;
- (void)p_fetchSchoolArrayWithParameter:completion:;
- (id)cursor;
- (id)keywords;
- (id)init;
- (void)setCursor:;
- (void)setKeywords:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)copyWithZone:;
@end
