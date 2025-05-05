@interface VKRecognizedItemFrameProcessorResult : VKFrameProcessorResult
@property (nonatomic) NSArray allItems;
@property (nonatomic) NSArray addedItems;
@property (nonatomic) NSArray updatedItems;
@property (nonatomic) NSArray removedItems;
- (id)allItems;
- (id)init;
- (void)setUpdatedItems:;
- (id)updatedItems;
- (void).cxx_destruct;
- (id)addedItems;
- (void)setAddedItems:;
- (id)removedItems;
- (void)setRemovedItems:;
- (void)setAllItems:;
@end
