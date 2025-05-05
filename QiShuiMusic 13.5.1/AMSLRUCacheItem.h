@interface AMSLRUCacheItem : AMSDoubleLinkedListNode
@property (nonatomic) <NSCopying> key;
- (id)key;
- (id)initWithKey:object:;
- (void)setKey:;
- (void).cxx_destruct;
@end
