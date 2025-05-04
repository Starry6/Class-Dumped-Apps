@interface AWEIMShareMoreSelectionMyGroupContentComponent : IESIMContactPickerCollectionViewContentComponent
@property (nonatomic) <IESIMContactPickerContentDataProvider><IESIMContactDataProviderLoadMoreAble> dataProvider;
@property (nonatomic) <IESIMContactPickerSelectService> selectService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (id)dataProvider:cellModelForShareModel:;
- (void)dataProvider:updateCellModel:;
- (id)getProviders;
- (void)setSelectService:;
- (id)selectService;
- (void)contactPickerSelectService:didAddSelectIdentifiers:;
- (void)contactPickerSelectService:didRemoveSelectIdentifier:;
- (void)updateBottomComponentViewHeight:;
- (BOOL)didSelectWithCellModel:;
- (id)emptyPageConfigForState:emptyPage:;
- (void)setCellModelUIConfigWithModel:;
- (BOOL)p_isSelectedTab;
- (id)p_makeDataProvider;
- (id)p_makeFilter;
- (void)setDataProvider:;
- (void).cxx_destruct;
- (id)dataProvider;
@end
