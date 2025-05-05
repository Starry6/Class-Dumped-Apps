@interface AMapCloudSearchBaseRequest : AMapSearchObject
@property (nonatomic) NSString tableID;
@property (nonatomic) NSArray filter;
@property (nonatomic) NSString sortFields;
@property (nonatomic) q sortType;
@property (nonatomic) q offset;
@property (nonatomic) q page;
- (void)setSortFields:;
- (id)sortFields;
- (long long)page;
- (void)setPage:;
- (id)filter;
- (void)setFilter:;
- (void)setOffset:;
- (id)init;
- (long long)offset;
- (void).cxx_destruct;
- (id)description;
- (id)tableID;
- (long long)sortType;
- (void)setSortType:;
- (id)filterString;
- (void)setTableID:;
- (id)sortString;
@end
