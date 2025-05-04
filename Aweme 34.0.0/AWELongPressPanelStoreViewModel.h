@interface AWELongPressPanelStoreViewModel : AWELongPressPanelBaseViewModel
- (void)shareToStory;
- (BOOL)needShow;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)p_enbaleLongPressShareAsStory;
- (void)didClickShareToStory;
+ (BOOL)shouldShowShareAsStoryWithAwemeModel:referString:;
+ (id)longPressPanelViewModel;
@end
