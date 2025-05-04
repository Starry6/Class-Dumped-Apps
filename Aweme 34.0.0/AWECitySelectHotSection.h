@interface AWECitySelectHotSection : AWECitySelectSection
@property (nonatomic) AWECitySelectCollectionTableViewCell hotCityCell;
@property (nonatomic) NSArray hotCities;
- (id)viewForHeader;
- (id)hotCities;
- (id)hotCityCell;
- (void)setHotCities:;
- (void)setHotCityCell:;
- (unsigned long long)numberOfItems;
- (void).cxx_destruct;
- (id)cellForIndexPath:;
- (double)heightForHeader;
@end
