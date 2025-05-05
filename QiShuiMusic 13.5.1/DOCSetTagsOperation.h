@interface DOCSetTagsOperation : FPSetTagsOperation
@property (nonatomic) NSArray oldTagsLists;
@property (nonatomic) NSArray updatedTagsLists;
@property (nonatomic) DOCUndoManager undoManager;
@property (nonatomic) NSString actionNameForUndoing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)undoManager;
- (id)currentItems;
- (id)operationForRedoing;
- (id)operationForUndoing;
- (void)registerUndo;
- (id)actionNameForUndoing;
- (id)initWithItems:tagsLists:isUndoable:shouldClearUndoStack:undoManager:;
- (void)clearUndoStack;
- (id)operationItemIDs;
- (id)itemIDsFromItems:;
- (id)itemsFromItemIDs:;
- (id)currentTagsLists;
- (id)tagsListsFromItems:;
- (id)oldTagsLists;
- (id)updatedTagsLists;
@end
