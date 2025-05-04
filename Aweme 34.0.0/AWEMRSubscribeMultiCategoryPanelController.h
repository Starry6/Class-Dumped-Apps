@interface AWEMRSubscribeMultiCategoryPanelController : UIViewController
@property (nonatomic) AWECodeGenCommonSubscribePopStModel originPopupModel;
@property (nonatomic) NSNumber isOriginContainSubscribed;
@property (nonatomic) AWECodeGenCommonSubscribePopStModel popupModel;
@property (nonatomic) AWEMRSubscribeMultiCategoryPanelView panelView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)panelView;
- (void)setPanelView:;
- (void)bindEvent;
- (void)updateButtonStatus;
- (id)getPanelView;
- (void)setOriginPopupModel:;
- (id)initWithPopupModel:;
- (id)originPopupModel;
- (void)bindModel;
- (void)handlePositiveButtonDidClick;
- (id)isOriginContainSubscribed;
- (void)setIsOriginContainSubscribed:;
- (void)setup;
- (void).cxx_destruct;
- (id)popupModel;
- (void)setPopupModel:;
@end
