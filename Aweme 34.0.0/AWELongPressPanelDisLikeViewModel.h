@interface AWELongPressPanelDisLikeViewModel : AWELongPressPanelBaseViewModel
- (id)aAWEPadModuleAdapter;
- (BOOL)needShow;
- (id)aAWEPadSplitScreenAdapter;
- (id)aAWEPlayInteractionAdapter;
- (void)configVM;
- (id)panelBizVMIdentifier;
+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadSplitScreenAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (BOOL)shouldShowNewDislikeWithAwemeModel:referString:;
+ (id)longPressPanelViewModel;
+ (BOOL)p_shouldShowDisLikeOrUnfollowWithAwemeModel:referString:;
@end
