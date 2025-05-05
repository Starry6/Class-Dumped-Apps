@interface PLHighlightItemClusterer : NSObject
@property (nonatomic) <PLHighlightItemClustererRule> rule;
- (id)rule;
- (void).cxx_destruct;
- (void)restoreExistingHighlightItemListsFromUpdatedHighlightItems:deletedHighlightItems:usingModelReader:progressBlock:restoreBlock:;
- (id)processHighlightItems:withRestoredHighlightItemLists:progressBlock:;
- (id)initWithRule:;
@end
