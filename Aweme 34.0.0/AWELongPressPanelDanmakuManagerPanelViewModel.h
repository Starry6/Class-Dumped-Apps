@interface AWELongPressPanelDanmakuManagerPanelViewModel : AWELongPressPanelBaseViewModel
@property (nonatomic) NSString disableToast;
- (BOOL)enableDanmaku;
- (BOOL)needShow;
- (id)disableToast;
- (void)setDisableToast:;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)needShowForScene:;
- (void).cxx_destruct;
+ (id)longPressPanelViewModel;
@end
