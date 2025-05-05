@interface ELParserLinkList : NSObject
@property (nonatomic) NSHashTable nodeTable;
@property (nonatomic) ELParserLinkNode header;
@property (nonatomic) ELParserLinkNode tail;
@property (nonatomic) ELParserLinkNode pNode;
@property (nonatomic) q capacity;
- (void)bringNodeToHeadWithKey:;
- (void)bringNodeToHeadWithKeys:;
- (void)bringNodeToTailWithKey:;
- (void)bringNodeToTailWithKeys:;
- (id)currentPtrNode;
- (id)goToNext;
- (void)insertNodeAtHeadWithKey:;
- (void)insertNodeAtTailWithKey:;
- (id)keyWithNodeValue:;
- (id)nodeTable;
- (id)pNode;
- (void)removeNodeWithKey:;
- (void)setNodeTable:;
- (void)setPNode:;
- (long long)capacity;
- (void)setHeader:;
- (id)tail;
- (void)removeAll;
- (id)init;
- (void).cxx_destruct;
- (void)setTail:;
- (id)header;
@end
