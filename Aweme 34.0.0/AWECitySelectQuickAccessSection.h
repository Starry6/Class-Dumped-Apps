@interface AWECitySelectQuickAccessSection : AWECitySelectSection
@property (nonatomic) AWECitySelectCollectionTableViewCell quickAccessCitysCell;
@property (nonatomic) NSArray quickAccessCities;
- (id)viewForHeader;
- (id)quickAccessCities;
- (id)quickAccessCitysCell;
- (void)setQuickAccessCities:;
- (void)setQuickAccessCitysCell:;
- (unsigned long long)numberOfItems;
- (void).cxx_destruct;
- (id)cellForIndexPath:;
- (double)heightForHeader;
@end
