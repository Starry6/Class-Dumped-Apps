@interface BDPathComponent : NSObject
@property (nonatomic) NSString rootName;
@property (nonatomic) BDPathDocumentBundle documentBundle;
@property (nonatomic) BDPathLibraryBundle libraryBundle;
@property (nonatomic) BDPathTemporaryBundle tmpBundle;
- (long long)_totalFilesSize;
- (void)_cleanupDeletableFiles;
- (long long)_deletableFilesSize;
- (void)cleanupDeletableFiles;
- (void)cleanupDeletableFilesWithCompletion:;
- (long long)deletableFilesSize;
- (void)deletableFilesSizeWithCompletion:;
- (id)documentBundle;
- (id)initWithRootName:;
- (id)rootName;
- (void)setDocumentBundle:;
- (void)setRootName:;
- (void)setTmpBundle:;
- (id)tmpBundle;
- (long long)totalFilesSize;
- (void)totalFilesSizeWithCompletion:;
- (long long)triggerCleanEventForOpportunity:needSize:;
- (void)setLibraryBundle:;
- (id)libraryBundle;
- (void).cxx_destruct;
+ (id)documentBundleWithRootName:;
+ (id)libraryBundleWithRootName:;
+ (id)tmpBundleWithRootName:;
@end
