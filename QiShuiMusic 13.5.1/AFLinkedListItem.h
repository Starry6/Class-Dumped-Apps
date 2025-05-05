@interface AFLinkedListItem : NSObject
@property (nonatomic) @ object;
@property (nonatomic) AFLinkedListItem previousItem;
@property (nonatomic) AFLinkedListItem nextItem;
- (id)previousItem;
- (id)initWithObject:;
- (id)nextItem;
- (void).cxx_destruct;
- (id)object;
- (void)setPreviousItem:;
- (void)removeFromList;
- (void)insertBeforeItem:;
- (void)insertAfterItem:;
- (void)setNextItem:;
@end
