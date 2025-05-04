@interface AWEMVExtendedConsumptionRelatedSearchElement : AWEMVExtendedConsumptionBaseElement
@property (nonatomic) AWEMVExtendedConsumptionBarView relatedSearchView;
- (BOOL)canAppearWithModel:context:;
- (id)titleString:;
- (id)relatedSearchView;
- (id)clientEngineExtraForAweme:;
- (id)generateURLStringWith:model:barModel:context:;
- (void)setRelatedSearchView:;
- (void)viewDidLoad;
- (id)priority;
- (void)setData:;
- (void).cxx_destruct;
- (void)setupUI;
@end
