@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator
@property (nonatomic) @? errorHandler;
- (id)fileAttributes;
- (id)nextObject;
- (void)skipDescendants;
- (void)skipDescendents;
- (void)dealloc;
- (id)errorHandler;
- (unsigned long long)level;
- (id)initWithURL:includingPropertiesForKeys:options:errorHandler:;
- (BOOL)isEnumeratingDirectoryPostOrder;
- (void)setErrorHandler:;
- (id)directoryAttributes;
@end
