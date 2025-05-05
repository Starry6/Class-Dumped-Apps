@interface NSFileAttributes : NSDictionary
- (BOOL)isDirectory;
- (unsigned long long)fileSize;
- (void)dealloc;
- (id)fileGroupOwnerAccountName;
- (unsigned long long)fileOwnerAccountNumber;
- (unsigned long long)hash;
- (id)fileModificationDate;
- (id)keyEnumerator;
- (unsigned long long)fileGroupOwnerAccountNumber;
- (id)fileType;
- (long long)fileSystemNumber;
- (id)objectForKey:;
- (id)fileOwnerAccountName;
- (unsigned long long)count;
- (unsigned long long)fileSystemFileNumber;
- (BOOL)isEqual:;
- (unsigned long long)filePosixPermissions;
+ (id)_attributesAtURL:partialReturn:filterResourceFork:error:;
+ (id)attributesWithStat:;
+ (id)_attributesAtPath:partialReturn:filterResourceFork:error:;
+ (BOOL)_populateCatInfo:forURL:statInfo:error:;
+ (id)attributesAtPath:traverseLink:;
@end
