@interface ML3StatementCacheList : NSObject
@property (nonatomic) ML3StatementCacheNode firstNode;
@property (nonatomic) ML3StatementCacheNode lastNode;
@property (nonatomic) Q count;
- (void)promoteNodeWithDictionaryKey:;
- (id)lastNode;
- (void)appendNode:;
- (void)deleteOldestNode;
- (void).cxx_destruct;
- (id)firstNode;
- (id)description;
- (unsigned long long)count;
- (id)oldestNode;
- (void)deleteAllNodes;
@end
