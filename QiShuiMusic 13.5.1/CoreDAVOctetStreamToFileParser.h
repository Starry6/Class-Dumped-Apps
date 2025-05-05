@interface CoreDAVOctetStreamToFileParser : CoreDAVOctetStreamParser
@property (nonatomic) NSFileHandle fileHandle;
- (void)setFileHandle:;
- (id)fileHandle;
- (BOOL)processData:forTask:;
- (void).cxx_destruct;
- (id)initWithFileHandle:;
@end
