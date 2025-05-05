@interface FLTopLevelViewModel : NSObject
@property (nonatomic) NSString localizedDeviceRowTitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_updateTimerItems:;
- (void)dealloc;
- (id)groups;
- (void)refreshItems:withCompletionHandler:;
- (id)initWithBundleIdentifier:clientIdentifier:;
- (id)localizedDeviceRowTitle;
- (id)initWithBundleIdentifier:controller:;
- (void)setLocalizedDeviceRowTitle:;
- (id)_groupsForPrimaryAccount:secondaryAccounts:simpleAccountGrouping:;
- (void)_refreshItemsWithExtensionToItemMap:completion:;
- (void).cxx_destruct;
- (id)allPendingItems;
- (void)refreshItemsForItem:withCompletionHandler:;
- (void)mapItems:toGroups:unknownGroup:deviceGroup:simpleAccountGrouping:;
- (void)_removeTimerForItem:;
- (id)extensionToItemMapFromItems:;
- (id)groupsForPrimaryAccount:secondaryAccounts:;
- (void)_configureTimerForItem:;
- (id)initWithIdentifier:;
- (void)setItemChangeHandler:;
+ (id)redirectURLForItem:withAction:;
+ (id)_prefixFromBundleIdentifier:;
@end
