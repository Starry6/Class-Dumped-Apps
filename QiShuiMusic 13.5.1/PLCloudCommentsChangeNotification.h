@interface PLCloudCommentsChangeNotification : PLContainerChangeNotification
@property (nonatomic) PLManagedAsset asset;
- (id)userInfo;
- (id)asset;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)_contentRelationshipName;
+ (id)notificationWithAsset:snapshot:;
@end
