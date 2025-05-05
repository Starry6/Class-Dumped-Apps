@interface PLPhotoDCFDirectory : PLPhotoDCFObject
@property (nonatomic) BOOL considerInvalidFileGroups;
- (void).cxx_destruct;
- (id)nextAvailableFileGroup;
- (void)ensureDirectoryExists;
- (id)_lastUsedFileGroupUserInfoKey;
- (id)initWithName:number:dcimDirectory:;
- (id)dcimDirectory;
- (unsigned int)_calculateBaseDirectoryValue;
- (BOOL)canAddFileGroupWithGroupNumber:;
- (BOOL)_canAddItemWithPrefix:minimumFileGroupNumber:;
- (BOOL)_canAddItemWithPrefix:;
- (BOOL)canAddImage;
- (BOOL)canAddVideo;
- (id)fullPath;
- (BOOL)isEntensionValid:;
- (id)fileGroups;
- (id)_nextAvailableFileGroupWithPrefix:extension:;
- (id)nextAvailableVideoFileGroupWithExtension:;
- (void)removeFileGroup:;
- (void)setWriteIsPending:;
- (BOOL)considerInvalidFileGroups;
- (void)setConsiderInvalidFileGroups:;
+ (void)initializeFileGroupPrefixAndExtensions;
+ (id)fileGroupRequiredEmptyPrefixes;
+ (id)fileGroupRequiredEmptyExtensions;
@end
