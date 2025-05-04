@interface AWEMVExtendedConsumptionHotspotElement : AWEMVExtendedConsumptionBaseElement
@property (nonatomic) AWEMVExtendedConsumptionHotspotBarView hotSpotView;
- (BOOL)canAppearWithModel:context:;
- (id)hotSpotView;
- (id)paramsForHotSpotTransfer:barModel:;
- (void)setHotSpotView:;
- (void)viewDidLoad;
- (id)priority;
- (void)setData:;
- (void).cxx_destruct;
- (void)setupUI;
@end
