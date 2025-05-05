@interface WBSTabOrderInsertionHint : NSObject
@property (nonatomic) <WBSOrderedTab> tabToInsertAfter;
@property (nonatomic) Q insertionIndex;
@property (nonatomic) Q relationType;
- (void).cxx_destruct;
- (unsigned long long)relationType;
- (id)initWithTabToInsertAfter:relation:;
- (id)initWithTabToInsertAfter:insertionIndex:relation:;
- (id)tabToInsertAfter;
- (unsigned long long)insertionIndex;
@end
