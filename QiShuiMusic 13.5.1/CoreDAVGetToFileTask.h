@interface CoreDAVGetToFileTask : CoreDAVGetTask
@property (nonatomic) NSFileHandle destinationFile;
- (id)copyDefaultParserForContentType:;
- (void).cxx_destruct;
- (BOOL)shouldLogResponseBody;
- (id)initWithURL:destinationFile:;
- (id)destinationFile;
- (void)setDestinationFile:;
@end
