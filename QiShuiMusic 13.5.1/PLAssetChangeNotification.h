@interface PLAssetChangeNotification : PLChangeNotification
@property (nonatomic) NSSet updatedAssets;
- (id)userInfo;
- (id)updatedAssets;
- (void).cxx_destruct;
- (id)object;
- (id)description;
- (id)_init;
- (id)name;
- (void)setUpdatedAssets:;
- (id)_initWithChangedObjects:;
+ (id)notificationWithChangedAssets:;
@end
