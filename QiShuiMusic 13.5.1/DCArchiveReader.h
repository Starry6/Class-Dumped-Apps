@interface DCArchiveReader : NSObject
@property (nonatomic) NSString sourcePath;
@property (nonatomic) NSString destinationPath;
@property (nonatomic) BOOL overwrite;
@property (nonatomic) BOOL writesTemporaryFilesInsideDestination;
@property (nonatomic) BOOL skipsInvisibleHeaders;
- (id)sourcePath;
- (void)setDestinationPath:;
- (id)destinationPath;
- (void).cxx_destruct;
- (id)temporaryDirectory;
- (void)setSourcePath:;
- (BOOL)overwrite;
- (void)setOverwrite:;
- (id)initWithSourceURL:destinationURL:;
- (void)setSkipsInvisibleHeaders:;
- (void)setWritesTemporaryFilesInsideDestination:;
- (BOOL)unarchiveResultURLs:error:;
- (id)incrementalPathInDirectory:withFilename:andExtension:;
- (BOOL)unarchiveSourcePath:toDestinationPath:error:;
- (BOOL)moveContentsOfDirectory:toDirectory:resultURLs:error:;
- (BOOL)writesTemporaryFilesInsideDestination;
- (BOOL)skipsInvisibleHeaders;
@end
