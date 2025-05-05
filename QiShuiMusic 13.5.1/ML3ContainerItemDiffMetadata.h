@interface ML3ContainerItemDiffMetadata : NSObject
@property (nonatomic) q persistentID;
@property (nonatomic) q containerPersistentID;
@property (nonatomic) q itemPersistentID;
@property (nonatomic) q newPosition;
@property (nonatomic) q previousPosition;
- (long long)persistentID;
- (long long)itemPersistentID;
- (void)setItemPersistentID:;
- (void)setPersistentID:;
- (long long)containerPersistentID;
- (void)setContainerPersistentID:;
- (long long)newPosition;
- (void)setNewPosition:;
- (long long)previousPosition;
- (void)setPreviousPosition:;
+ (id)diffMetadataWithPersistentID:;
+ (id)diffMetadataWithPersistentID:containerPersistentID:itemPersistentID:newPosition:previousPosition:;
@end
