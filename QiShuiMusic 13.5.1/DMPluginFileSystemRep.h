@interface DMPluginFileSystemRep : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString path;
@property (nonatomic) NSString bundleIdentifier;
- (id)path;
- (id)bundleIdentifier;
- (void).cxx_destruct;
- (id)name;
- (id)initWithName:atEnclosingPath:;
- (BOOL)isBundleValid;
+ (id)_pathsContainingPossiblePluginDirectory;
+ (id)allReps;
@end
