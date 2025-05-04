@interface AWEAnchorAdditionDataController : AWEListDataController
@property (nonatomic) NSArray recommendDataSource;
@property (nonatomic) NSArray sectionDataSource;
@property (nonatomic) q anchorType;
@property (nonatomic) q page;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) NSArray tabbarDataSource;
- (void)setExtraParams:;
- (id)extraParams;
- (void)fetchRecommendGameDataSourceWithPage:completion:;
- (id)extraParamsKey;
- (id)extraParamsString;
- (void)setTabbarDataSource:;
- (void)setSectionDataSource:;
- (void)setRecommendDataSource:;
- (id)tabbarDataSource;
- (id)recommendDataSource;
- (id)sectionDataSource;
- (void)refreshWithAnchorBusniessType:extraParams:completion:;
- (void)loadMoreWithAnchorBusniessType:completion:;
- (long long)page;
- (void).cxx_destruct;
- (long long)anchorType;
- (void)setPage:;
- (void)setAnchorType:;
@end
