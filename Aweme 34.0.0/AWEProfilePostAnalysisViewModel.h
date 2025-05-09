@interface AWEProfilePostAnalysisViewModel : AWEBaseListViewModel
@property (nonatomic) AWETabContainerSectionViewModel tabBarViewModel;
@property (nonatomic) NSMutableDictionary typeToVCMap;
@property (nonatomic) NSDate startDate;
@property (nonatomic) AWEProfilePostAnalysisModel panelModel;
@property (nonatomic) <AWEProfilePostAnalysisTabItemDelegate> delegate;
@property (nonatomic) Q lastTabType;
- (void)setupViewModel;
- (id)tabBarViewModel;
- (void)setTabBarViewModel:;
- (long long)indexOfTabType:;
- (id)tabNameForType:;
- (void)setPanelModel:;
- (id)panelModel;
- (id)trackCommonParams:;
- (id)scrollViewWithModel:;
- (unsigned long long)tabTypeOfIndex:;
- (unsigned long long)lastTabType;
- (void)trackTabItemStayDuration:;
- (id)sheetShouldRecognizeAsynchronousScrollViewArrayOfIndex:;
- (id)viewControllerWithModel:;
- (void)trackTabItemShow:isDefault:;
- (id)typeToVCMap;
- (id)classMaps;
- (id)tabItemModelOfIndex:;
- (void)setLastTabType:;
- (void)setTypeToVCMap:;
- (id)startDate;
- (id)delegate;
- (void)setStartDate:;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
