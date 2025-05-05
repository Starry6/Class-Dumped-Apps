@interface PLAssetContainerListChangeNotification : PLContainerChangeNotification
@property (nonatomic) <PLAssetContainerList> assetContainerList;
@property (nonatomic) NSObject<PLAlbumContainer> albumList;
- (id)userInfo;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)_contentRelationshipName;
- (id)assetContainerList;
- (id)albumList;
+ (id)notificationWithContainerList:snapshot:changedContainers:;
@end
