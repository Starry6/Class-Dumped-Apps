@interface AWELongPressPanelCollectViewModel : AWELongPressPanelBaseViewModel
- (void)toggleFavoriteOnLongPressWithAweme:referString:logExtraDict:;
- (BOOL)needShow;
- (id)aAWELiteUGMainModuleAdapter;
- (void)configVM;
+ (Class)aAWELiteUGMainModuleAdapterClass;
+ (BOOL)shouldShowCollectWithAwemeModel:;
+ (id)longPressPanelViewModel;
@end
