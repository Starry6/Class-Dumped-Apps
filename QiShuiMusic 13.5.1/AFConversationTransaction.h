@interface AFConversationTransaction : NSObject
@property (nonatomic) NSArray updatedItemIndexPaths;
@property (nonatomic) NSArray insertedItemIndexPaths;
@property (nonatomic) NSArray presentationStateChangedItemIndexPaths;
- (id)updatedItemIndexPaths;
- (id)insertedItemIndexPaths;
- (void).cxx_destruct;
- (id)initWithUpdatedItemIndexPaths:insertedItemIndexPaths:presentationStateChangedItemIndexPaths:;
- (id)presentationStateChangedItemIndexPaths;
@end
