@interface NSAllDescendantPathsEnumerator : NSDirectoryEnumerator
- (id)fileAttributes;
- (id)_under;
- (id)nextObject;
- (void)skipDescendants;
- (void)skipDescendents;
- (void)dealloc;
- (unsigned long long)level;
- (id)currentSubdirectoryAttributes;
- (BOOL)isEnumeratingDirectoryPostOrder;
- (id)directoryAttributes;
+ (id)newWithPath:prepend:attributes:cross:depth:;
@end
