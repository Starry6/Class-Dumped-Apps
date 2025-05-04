@interface AWEDitoPOIMallPageContext : DitoGeneralContainerPageContext
@property (nonatomic) NSString title;
@property (nonatomic) NSString originalTitle;
@property (nonatomic) Q tabType;
@property (nonatomic) AWEPOIDetailMallFilterModel filterModels;
@property (nonatomic) AWEPOIDetailMallFilterModel selectedL2Item;
@property (nonatomic) AWEPOIDetailMallFilterModel selectedL3Item;
@property (nonatomic) AWEPOIDetailMallFilterModel selectedItem;
@property (nonatomic) NSDictionary extraParams;
- (void)setExtraParams:;
- (id)extraParams;
- (unsigned long long)tabType;
- (void)setTabType:;
- (id)filterModels;
- (void)setFilterModels:;
- (void)setSelectedL2Item:;
- (id)selectedL2Item;
- (id)selectedL3Item;
- (void)setSelectedL3Item:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)selectedItem;
- (void)setSelectedItem:;
- (id)originalTitle;
- (void)setOriginalTitle:;
@end
