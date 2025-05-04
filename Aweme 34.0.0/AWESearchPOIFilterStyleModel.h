@interface AWESearchPOIFilterStyleModel : AWEDoubleColumnSearchMerchandiseFilterStyleModel
@property (nonatomic) NSNumber isTitleAlwaysUseBoldFont;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon defaultCityHeadIcon;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon selectingCityHeadIcon;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon selectedCityHeadIcon;
@property (nonatomic) NSString strDefaultSubTextColor;
@property (nonatomic) NSString strSelectedSubTextColor;
@property (nonatomic) NSString strSelectingSubTextColor;
- (void)setIsTitleAlwaysUseBoldFont:;
- (void)setDefaultCityHeadIcon:;
- (void)setSelectingCityHeadIcon:;
- (void)setSelectedCityHeadIcon:;
- (void)setStrDefaultSubTextColor:;
- (void)setStrSelectedSubTextColor:;
- (void)setStrSelectingSubTextColor:;
- (id)isTitleAlwaysUseBoldFont;
- (id)defaultCityHeadIcon;
- (id)selectingCityHeadIcon;
- (id)selectedCityHeadIcon;
- (id)strDefaultSubTextColor;
- (id)strSelectingSubTextColor;
- (id)strSelectedSubTextColor;
- (void).cxx_destruct;
+ (BOOL)usePOISearchFilterStyleModelClassWithJSONDictionary:;
+ (id)JSONKeyPathsByPropertyKey;
@end
