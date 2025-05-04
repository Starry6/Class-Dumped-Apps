@interface AWEHPBottomEditPanelController : NSObject
@property (nonatomic) AWEHPBottomTabEditController editController;
@property (nonatomic) @? onClose;
@property (nonatomic) @? panelDidDismiss;
@property (nonatomic) @? updateSelectedItemModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (void)showWithCloseCallback:;
- (id)panelDidDismiss;
- (void)updatePanelThemeStyle:;
- (void)setEditController:;
- (id)editController;
- (void)setPanelDidDismiss:;
- (id)updateSelectedItemModel;
- (void)setUpdateSelectedItemModel:;
- (BOOL)showPanelOnVC:context:completion:;
- (void)dismissPanelNeedAnimated:dismissType:;
- (id)initWithConfig:;
- (void).cxx_destruct;
- (id)onClose;
- (void)setOnClose:;
@end
