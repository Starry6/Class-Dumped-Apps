@interface FigFlatToNSDictionaryWrapper : NSDictionary
- (void)dealloc;
- (id)initWithObjects:forKeys:count:;
- (id)keyEnumerator;
- (id)objectForKey:;
- (unsigned long long)count;
- (id)initWithFlatDictionary:keySpec:;
- (id)initLazilyWithFlatDictionaryBacking:exportedKeySpec:deallocatorBlock:;
@end
