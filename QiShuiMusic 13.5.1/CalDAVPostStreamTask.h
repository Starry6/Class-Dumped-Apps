@interface CalDAVPostStreamTask : CoreDAVPostTask
@property (nonatomic) NSString previousScheduleTag;
@property (nonatomic) NSString filename;
- (id)requestBody;
- (id)filename;
- (id)responseData;
- (void)setFilename:;
- (void)setPreviousScheduleTag:;
- (id)copyDefaultParserForContentType:;
- (id)additionalHeaderValues;
- (void).cxx_destruct;
- (id)previousScheduleTag;
- (id)requestBodyStream;
- (id)lossyAsciiFilename;
- (id)utf8PercentEscapedFilename;
@end
