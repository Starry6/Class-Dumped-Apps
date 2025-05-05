@interface MPMusicPlayerControllerMutableQueue : MPMusicPlayerControllerQueue
@property (nonatomic) NSMutableDictionary insertedDescriptors;
@property (nonatomic) NSMutableArray removedItems;
@property (nonatomic) MPMusicPlayerControllerApplicationQueueModifications modifications;
- (void)removeItem:;
- (id)initWithController:;
- (void).cxx_destruct;
- (id)removedItems;
- (void)setRemovedItems:;
- (id)modifications;
- (void)insertQueueDescriptor:afterItem:;
- (void)_insertQueueDescriptor:afterItemWithIdentifier:;
- (void)_removeItemWithIdentifier:;
- (id)insertedDescriptors;
- (void)setInsertedDescriptors:;
@end
