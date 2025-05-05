@interface FigCaptureFlatPlistEnumerator : NSEnumerator
- (id)nextObject;
- (id)initWithFlatPlist:offset:count:;
- (id)allObjects;
@end
