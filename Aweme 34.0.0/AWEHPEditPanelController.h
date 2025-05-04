@interface AWEHPEditPanelController : NSObject
@property (nonatomic) AWEHPTopTabEditController editController;
@property (nonatomic) @? onClose;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showWithCloseCallback:;
- (BOOL)isEditPanelEnabled;
- (BOOL)isEditPanelShowing;
- (void)didLongPressTopBar;
- (void)setEditController:;
- (id)editController;
- (BOOL)showPanelWithEnterMethod:;
- (id)initWithConfig:;
- (void).cxx_destruct;
- (id)onClose;
- (void)setOnClose:;
@end
