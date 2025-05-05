@interface ML3ContainerItemDiffOperation : NSOperation
@property (nonatomic) NSArray containerItemsToUpdate;
@property (nonatomic) NSArray containerItemsToDelete;
- (void)main;
- (void).cxx_destruct;
- (id)initWithContainerPersistentID:updatedItemsPersistentIDs:connection:;
- (id)containerItemsToUpdate;
- (void)setContainerItemsToUpdate:;
- (id)containerItemsToDelete;
- (void)setContainerItemsToDelete:;
@end
