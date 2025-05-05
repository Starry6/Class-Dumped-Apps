@interface NAFlatMapEnumerator : NSEnumerator
@property (nonatomic) NSEnumerator enumerator;
@property (nonatomic) @? map;
- (id)nextObject;
- (id)enumerator;
- (void).cxx_destruct;
- (id)map;
- (id)allObjects;
- (id)initWithEnumerator:map:;
@end
