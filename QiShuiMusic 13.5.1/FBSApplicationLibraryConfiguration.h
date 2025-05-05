@interface FBSApplicationLibraryConfiguration : NSObject
@property (nonatomic) # applicationInfoClass;
@property (nonatomic) # applicationPlaceholderClass;
@property (nonatomic) BOOL allowConcurrentLoading;
@property (nonatomic) @? installedApplicationFilter;
@property (nonatomic) @? placeholderFilter;
- (void)setInstalledApplicationFilter:;
- (id)init;
- (void)setAllowConcurrentLoading:;
- (id)installedApplicationFilter;
- (Class)applicationPlaceholderClass;
- (Class)applicationInfoClass;
- (id)placeholderFilter;
- (void)setApplicationPlaceholderClass:;
- (void).cxx_destruct;
- (BOOL)allowConcurrentLoading;
- (void)setPlaceholderFilter:;
- (void)setApplicationInfoClass:;
- (id)copyWithZone:;
@end
