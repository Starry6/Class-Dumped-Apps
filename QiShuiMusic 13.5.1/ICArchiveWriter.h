@interface ICArchiveWriter : NSObject
@property (nonatomic) NSURL destinationURL;
@property (nonatomic) NSString basePath;
@property (nonatomic) BOOL usesCompression;
@property (nonatomic) BOOL flatten;
@property (nonatomic) NSString flattenFolderName;
- (void)dealloc;
- (BOOL)finish:;
- (void)setDestinationURL:;
- (id)destinationURL;
- (BOOL)open:;
- (void).cxx_destruct;
- (id)basePath;
- (BOOL)flatten;
- (id)initWithDestinationURL:baseURL:;
- (void)setUsesCompression:;
- (BOOL)writeURLs:error:;
- (void)setBasePath:;
- (void)setFlatten:;
- (void)setFlattenFolderName:;
- (BOOL)writeURL:isDirectory:error:;
- (BOOL)usesCompression;
- (id)flattenFolderName;
@end
