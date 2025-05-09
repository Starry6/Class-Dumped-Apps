@interface IXFileManager : NSObject
- (id)_realPathForURL:allowNonExistentPathComponents:;
- (BOOL)_moveItemAtURL:toURL:failIfSrcMissing:error:;
- (BOOL)moveItemAtURL:toURL:error:;
- (unsigned long long)diskUsageForURL:;
- (BOOL)setDataProtectionClassOfItemAtURL:toClass:ifPredicate:error:;
- (BOOL)createDirectoryAtURL:withIntermediateDirectories:mode:class:error:;
- (BOOL)copyItemAtURL:toURL:error:;
- (id)_realPathWhatExistsInPath:;
- (BOOL)_copyItemAtURL:toURL:failIfSrcMissing:error:;
- (id)realPathForURL:ifChildOfURL:;
- (BOOL)_traverseDirectory:error:withBlock:;
- (BOOL)itemExistsAtURL:;
- (BOOL)copyItemIfExistsAtURL:toURL:error:;
- (BOOL)itemDoesNotExistAtURL:;
- (BOOL)_validateSymlink:withStartingDepth:andEndingDepth:;
- (BOOL)createDirectoryAtURL:withIntermediateDirectories:mode:error:;
- (id)createTemporaryDirectoryInDirectoryURL:error:;
- (BOOL)dataProtectionClassOfItemAtURL:class:error:;
- (BOOL)moveItemIfExistsAtURL:toURL:error:;
- (BOOL)removeItemAtURL:error:;
- (BOOL)createSymbolicLinkAtURL:withDestinationURL:error:;
- (BOOL)removeItemAtURL:keepParent:error:;
- (BOOL)_removeACLAtPath:isDir:error:;
- (id)urlsForItemsInDirectoryAtURL:ignoringSymlinks:error:;
- (id)destinationOfSymbolicLinkAtURL:error:;
- (BOOL)itemExistsAtURL:isDirectory:error:;
- (BOOL)itemExistsAtURL:error:;
- (id)debugDescriptionOfItemAtURL:;
- (BOOL)setPermissionsOfItemAtURL:toMode:error:;
- (unsigned long long)_diskUsageForDirectoryURL:;
+ (id)defaultManager;
@end
