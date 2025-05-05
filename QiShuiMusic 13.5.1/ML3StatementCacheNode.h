@interface ML3StatementCacheNode : NSObject
@property (nonatomic) NSObject<NSCopying> dictionaryKey;
@property (nonatomic) ML3StatementCacheNode next;
- (id)next;
- (void)setNext:;
- (id)dictionaryKey;
- (void)setDictionaryKey:;
- (id)initWithDictionaryKey:;
- (void).cxx_destruct;
- (id)description;
@end
