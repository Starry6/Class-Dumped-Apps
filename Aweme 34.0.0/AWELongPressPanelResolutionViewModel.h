@interface AWELongPressPanelResolutionViewModel : AWELongPressPanelBaseViewModel
@property (nonatomic) DUXContentSheet containerSheet;
@property (nonatomic) NSObject<AWEPlayerResolutionService> resolutionService;
@property (nonatomic) NSArray gearTypesArr;
@property (nonatomic) UILabel resolutionTitleLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)containerSheet;
- (BOOL)needShow;
- (id)selectionPanel:optionNameAtRow:;
- (void)selectionPanel:didClickRow:;
- (id)getCommonTrackParams;
- (void)setContainerSheet:;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (id)describeString;
- (id)resolutionService;
- (id)getRightView;
- (void)showResolutionSelectPanel;
- (void)setResolutionTitleLabel:;
- (id)resolutionTitleLabel;
- (void)setGearTypesArr:;
- (id)gearTypesArr;
- (void)setResolutionService:;
- (void).cxx_destruct;
+ (id)longPressPanelViewModel;
@end
