@interface AWEIMMenuMultiSelectComponent : AWEIMComponentBase
- (BOOL)canShowItemWithMessage:context:;
- (id)menuItemTitle:context:;
- (id)menuItemImageName:context:;
- (id)menuTrackerName:context:;
- (unsigned long long)menuItemType;
- (void)didClickItemWithMessage:context:;
- (id)menuItemLightImageURL:context:;
- (id)menuItemDarkImageURL:context:;
@end
