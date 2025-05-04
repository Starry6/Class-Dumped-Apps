@interface AWELongPressPanelUnfollowViewModel : AWELongPressPanelBaseViewModel
- (BOOL)needShow;
- (void)configVM;
- (id)panelBizVMIdentifier;
+ (BOOL)shouldShowUnFollowWithAwemeModel:referString:;
+ (BOOL)shouldShowDislikeWithAwemeModel:referString:;
+ (id)longPressPanelViewModel;
+ (BOOL)p_shouldShowDisLikeOrUnfollowWithAwemeModel:referString:;
@end
