@interface AWECitySelectCurrentSection : AWECitySelectSection
@property (nonatomic) BOOL showL2Only;
@property (nonatomic) AWECityModel currentCity;
- (id)viewForHeader;
- (void)clickedAtIndexPath:;
- (BOOL)showL2Only;
- (void)clickHeader;
- (id)initWithTableView:appearance:disable:showL2Only:pageType:;
- (void)setShowL2Only:;
- (unsigned long long)numberOfItems;
- (void)setTableView:;
- (void).cxx_destruct;
- (id)cellForIndexPath:;
- (double)heightForHeader;
- (void)setCurrentCity:;
- (id)currentCity;
@end
