@interface MFMessageStoreObjectCache : NSObject
@property (nonatomic) @? keyGenerator;
@property (nonatomic) @? comparator;
- (void)_nts_setObject:forKey:;
- (void)removeObjectForMessage:kind:;
- (id)debugDescription;
- (void)_nts_evictObject;
- (void)flush;
- (id)addObject:forMessage:kind:;
- (id)objectForMessage:kind:;
- (void)setComparator:;
- (id)comparator;
- (void).cxx_destruct;
- (void)setKeyGenerator:;
- (void)setObject:forMessage:kind:;
- (id)description;
- (id)keyGenerator;
- (id)initWithCapacity:;
@end
