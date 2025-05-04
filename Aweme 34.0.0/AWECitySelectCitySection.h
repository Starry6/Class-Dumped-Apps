@interface AWECitySelectCitySection : AWECitySelectSection
@property (nonatomic) AWEFirstLetterAndCitiesModel model;
@property (nonatomic) BOOL shouldShowL3;
- (id)viewForHeader;
- (BOOL)shouldShowL3;
- (void)clickedAtIndexPath:;
- (void)setShouldShowL3:;
- (void)setModel:;
- (unsigned long long)numberOfItems;
- (void)setTableView:;
- (id)model;
- (void).cxx_destruct;
- (id)cellForIndexPath:;
- (double)heightForHeader;
@end
