@interface EFMutableIndexMap : NSObject
@property (nonatomic) NSMutableArray tuples;
@property (nonatomic) NSMutableDictionary keyToTuple;
@property (nonatomic) Q count;
- (id)init;
- (void)setObject:forKey:;
- (long long)keyAtIndex:;
- (void)removeAllKeys;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
- (id)tuples;
- (void)setTuples:;
- (void)addKey:atIndex:;
- (void)addKey:atIndex:object:;
- (BOOL)removeKeyAtIndex:;
- (void)enumerateKeysAndIndexesUsingBlock:;
- (void)enumerateKeysIndexesAndObjectsUsingBlock:;
- (BOOL)hasKeyAtIndex:;
- (id)_tupleForKey:;
- (unsigned long long)indexOfKey:;
- (id)objectForInt64Key:;
- (void)shiftKeysStartingAtIndex:by:;
- (id)keyToTuple;
- (void)setKeyToTuple:;
@end
