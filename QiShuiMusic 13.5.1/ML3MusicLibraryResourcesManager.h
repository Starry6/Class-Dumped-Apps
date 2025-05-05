@interface ML3MusicLibraryResourcesManager : NSObject
@property (nonatomic) _ML3BaseMusicLibraryResourcesManager implementation;
@property (nonatomic) ML3MusicLibraryResourcesManagerContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)libraryContainerPathByAppendingPathComponent:;
- (id)pathForBaseLocationPath:;
- (id)libraryContainerRelativePath:;
- (id)libraryContainerPath;
- (id)pathForResourceFileOrFolder:;
- (id)implementation;
- (id)pathForResourceFileOrFolder:basePath:relativeToBase:createParentFolderIfNecessary:;
- (id)context;
- (id)initWithBaseResourcesManager:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)setContext:;
- (void)setImplementation:;
+ (BOOL)supportsSecureCoding;
+ (id)sharedManager;
@end
