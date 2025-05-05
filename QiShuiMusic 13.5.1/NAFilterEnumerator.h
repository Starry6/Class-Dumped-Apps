@interface NAFilterEnumerator : NSEnumerator
@property (nonatomic) NSEnumerator enumerator;
@property (nonatomic) @? filter;
- (id)filter;
- (id)nextObject;
- (id)enumerator;
- (void).cxx_destruct;
- (id)allObjects;
- (id)initWithEnumerator:filter:;
@end
