@interface EXOSExtensionEnumerator : NSEnumerator
@property (nonatomic) NSArray extensionPaths;
@property (nonatomic) NSEnumerator extensionPathsEnumerator;
- (id)nextObject;
- (void).cxx_destruct;
- (id)extensionPaths;
- (id)initWithCacheURLs:;
- (id)initWithCacheURLs:paths:;
- (id)extensionPathsEnumerator;
+ (void)enumerateExtensionsInDirectoryAtURL:block:;
@end
