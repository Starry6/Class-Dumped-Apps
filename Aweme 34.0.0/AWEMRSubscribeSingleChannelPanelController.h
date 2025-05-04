@interface AWEMRSubscribeSingleChannelPanelController : UIViewController
@property (nonatomic) AWECodeGenCommonSubscribePopStModel originPopupModel;
@property (nonatomic) AWECodeGenCommonSubscribePopStModel popupModel;
@property (nonatomic) AWECodeGenSubcategoryModel subcategory;
@property (nonatomic) AWEMRSubscribeSingleChannelPanelView panelView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)panelView;
- (void)setPanelView:;
- (void)bindEvent;
- (id)getPanelView;
- (void)setOriginPopupModel:;
- (id)initWithPopupModel:;
- (id)originPopupModel;
- (void)bindModel;
- (BOOL)isSubscribePanel;
- (void)handleRequestWithCurrentSubscribeStatus:;
- (BOOL)hasOptionView;
- (void)handleWithOptionViewConfirmClick;
- (void)setup;
- (void).cxx_destruct;
- (void)setSubcategory:;
- (id)subcategory;
- (id)originChannel;
- (id)popupModel;
- (void)setPopupModel:;
@end
