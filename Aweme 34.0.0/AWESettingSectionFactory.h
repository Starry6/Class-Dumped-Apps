@interface AWESettingSectionFactory : NSObject
- (id)aAWEUserCenterIgnoreCommonAdapter;
+ (Class)aAWEUserCenterIgnoreCommonAdapterClass;
+ (id)modelWithType:itemsArray:ignoreItemsArray:registerAtViewModel:;
+ (id)modelWithType:sectionTitle:sectionFooterTitle:itemsArray:ignoreItemsArray:registerAtViewModel:;
+ (id)_buildSettingItemModelWithItems:ignoreItemsArray:viewModel:;
@end
