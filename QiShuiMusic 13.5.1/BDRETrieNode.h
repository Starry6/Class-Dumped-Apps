@interface BDRETrieNode : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSMutableDictionary equalChildNodes;
@property (nonatomic) NSMutableArray matchChildNodes;
- (id)matchChildNodes;
- (id)constructEqualChildNodeWithKey:;
- (id)equalChildNodes;
- (void)addMatchChildNode:;
- (id)key;
- (void)setKey:;
- (void).cxx_destruct;
- (id)initWithKey:;
@end
