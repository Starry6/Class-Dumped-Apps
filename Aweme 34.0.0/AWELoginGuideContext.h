@interface AWELoginGuideContext : NSObject
@property (nonatomic) AWELoginPanelDismissModel dismissModel;
@property (nonatomic) @? loginPanelManualDismissBlock;
@property (nonatomic) @? loginPanelShowFinishBlock;
- (id)dismissModel;
- (void)setDismissModel:;
- (id)loginPanelManualDismissBlock;
- (void)setLoginPanelManualDismissBlock:;
- (id)loginPanelShowFinishBlock;
- (void)setLoginPanelShowFinishBlock:;
- (id)init;
- (void).cxx_destruct;
@end
