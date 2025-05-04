@interface AWECitySelectHistorySection : AWECitySelectSection
@property (nonatomic) AWECitySelectCollectionTableViewCell historyCityCell;
@property (nonatomic) NSArray historyCities;
- (id)viewForHeader;
- (id)historyCities;
- (id)historyCityCell;
- (void)setHistoryCities:;
- (void)setHistoryCityCell:;
- (unsigned long long)numberOfItems;
- (void).cxx_destruct;
- (id)cellForIndexPath:;
- (double)heightForHeader;
@end
