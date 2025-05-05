@interface ARArchive : NSObject
@property (nonatomic) NSArray filePaths;
- (id)initWithData:error:;
- (id)init;
- (id)filePaths;
- (BOOL)writeToURL:error:;
- (void).cxx_destruct;
- (id)initWithContentsOfURL:error:;
- (id)dataRepresentation;
- (void)addData:withFilename:extension:;
- (void)addData:withPath:;
- (id)dataForResource:withExtension:;
- (id)dataForResourceAtPath:;
- (BOOL)_loadArchiveFromMemory:error:;
- (BOOL)_loadArchiveFromURL:error:;
- (BOOL)_writeToArchive:;
- (id)_createArchiveForReading;
- (BOOL)_readDataFromArchive:;
- (BOOL)_readDataForEntry:archive:;
@end
