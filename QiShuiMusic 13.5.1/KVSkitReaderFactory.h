@interface KVSkitReaderFactory : NSObject
- (id)init;
- (id)accessReadOnlySkitForUser:;
- (BOOL)setItems:error:;
- (void).cxx_destruct;
- (BOOL)supportsMultiUser;
- (id)_provideAccess:forUser:;
+ (id)_rootDirectoryURL;
@end
