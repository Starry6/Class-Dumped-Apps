@interface CUIPSDLayerEnumerator : NSEnumerator
- (id)nextObject;
- (void)dealloc;
- (id)allObjects;
- (id)initWithPSDLayerGroup:;
- (id)initWithPSDImage:;
+ (id)enumeratorWithPSDLayerGroup:;
+ (id)enumeratorWithPSDImage:;
@end
