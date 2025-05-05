@interface AWESettingSectionFactory : NSObject
+ (id)_buildSettingItemModelWithItems:ignoreItemsArray:viewModel:;
+ (id)modelWithType:itemsArray:ignoreItemsArray:registerAtViewModel:;
@end
