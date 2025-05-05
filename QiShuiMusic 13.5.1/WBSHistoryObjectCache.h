@interface WBSHistoryObjectCache : NSObject
- (id)allItems;
- (id)init;
- (void)setItem:forID:;
- (void)reserveItemCapacity:;
- (void)_clearNilReferences;
- (void)changeItemIDs:;
- (id)itemForID:;
- (void)removeItemWithID:;
- (void)setVisit:forID:;
- (void)clear;
- (void).cxx_destruct;
- (id)visitForID:;
- (void)changeVisitIDs:;
- (id).cxx_construct;
@end
