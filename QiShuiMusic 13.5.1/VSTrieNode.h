@interface VSTrieNode : NSObject
@property (nonatomic) NSMutableArray objects;
@property (nonatomic) NSMutableDictionary next;
- (id)next;
- (void)setNext:;
- (id)init;
- (void)setObjects:;
- (id)objects;
- (void).cxx_destruct;
@end
