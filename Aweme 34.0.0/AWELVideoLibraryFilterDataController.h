@interface AWELVideoLibraryFilterDataController : AWEBaseDataController
@property (nonatomic) AWELVideoLibraryFilterRequestModel requestModel;
@property (nonatomic) AWELVideoLibraryFilterResponseModel filterData;
- (void)setRequestModel:;
- (void)fetchDataWithCompletion:;
- (id)searchKeys;
- (id)wordNames;
- (void)setFilterData:;
- (id)requestModel;
- (void).cxx_destruct;
- (id)filterData;
@end
