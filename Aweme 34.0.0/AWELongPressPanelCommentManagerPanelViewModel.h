@interface AWELongPressPanelCommentManagerPanelViewModel : AWELongPressPanelBaseViewModel
@property (nonatomic) NSString disableToast;
- (BOOL)needShow;
- (id)disableToast;
- (void)setDisableToast:;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)needShowForScene:;
- (BOOL)enableCommentManager;
- (void).cxx_destruct;
+ (id)longPressPanelViewModel;
@end
