@interface WebItemProviderLoadResult : NSObject
@property (nonatomic) NSArray loadedFileURLs;
@property (nonatomic) NSArray loadedTypeIdentifiers;
@property (nonatomic) BOOL canBeRepresentedAsFileUpload;
@property (nonatomic) NSItemProvider itemProvider;
@property (nonatomic) NSArray typesToLoad;
- (void).cxx_destruct;
- (id)description;
- (id)itemProvider;
- (id).cxx_construct;
- (id)initWithItemProvider:typesToLoad:;
- (BOOL)canBeRepresentedAsFileUpload;
- (id)typesToLoad;
- (id)fileURLForType:;
- (void)setFileURL:forType:;
- (id)loadedFileURLs;
- (id)loadedTypeIdentifiers;
+ (id)loadResultWithItemProvider:typesToLoad:;
@end
