@interface PLAssetContainerChangeNotification : PLContainerChangeNotification
@property (nonatomic) PLManagedObject container;
@property (nonatomic) <PLAssetContainer> assetContainer;
@property (nonatomic) NSObject<PLAlbumProtocol> album;
@property (nonatomic) BOOL titleDidChange;
@property (nonatomic) BOOL keyAssetDidChange;
- (void)dealloc;
- (id)userInfo;
- (id)album;
- (id)container;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (void)_calculateDiffs;
- (BOOL)_getOldSet:newSet:;
- (BOOL)titleDidChange;
- (BOOL)keyAssetDidChange;
- (BOOL)hasDeletes;
- (id)assetContainer;
- (id)_contentRelationshipName;
+ (id)notificationWithContainer:snapshot:changedAssets:;
@end
