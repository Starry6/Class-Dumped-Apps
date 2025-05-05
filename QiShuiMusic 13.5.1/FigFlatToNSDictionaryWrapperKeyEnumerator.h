@interface FigFlatToNSDictionaryWrapperKeyEnumerator : NSEnumerator
- (id)nextObject;
- (void)dealloc;
- (id)allObjects;
- (id)initWithFlatDictionary:;
@end
