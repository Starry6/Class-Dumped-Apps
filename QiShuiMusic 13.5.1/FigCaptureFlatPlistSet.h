@interface FigCaptureFlatPlistSet : NSSet
- (void)dealloc;
- (id)member:;
- (id)objectEnumerator;
- (id)initWithFlatPlist:offset:;
- (unsigned long long)count;
@end
