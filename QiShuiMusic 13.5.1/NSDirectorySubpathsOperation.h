@interface NSDirectorySubpathsOperation : NSDirectoryTraversalOperation
- (void)dealloc;
- (void)handlePathname:;
- (id)subpaths;
+ (id)_errorWithErrno:atPath:;
+ (id)directorySubpathsOperationAtPath:;
@end
