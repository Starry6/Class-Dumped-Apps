@interface NSDirectoryEnumerator : NSEnumerator
@property (nonatomic) NSDictionary fileAttributes;
@property (nonatomic) NSDictionary directoryAttributes;
@property (nonatomic) BOOL isEnumeratingDirectoryPostOrder;
@property (nonatomic) Q level;
- (id)fileAttributes;
- (id)nextObject;
- (void)skipDescendants;
- (void)skipDescendents;
- (unsigned long long)level;
- (BOOL)isEnumeratingDirectoryPostOrder;
- (id)directoryAttributes;
@end
