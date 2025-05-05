@interface CalDAVCalendarSearchTask : CoreDAVTask
@property (nonatomic) NSDictionary urlsToResults;
- (id)requestBody;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:;
- (void)setLimit:;
- (id)copyDefaultParserForContentType:;
- (id)additionalHeaderValues;
- (void).cxx_destruct;
- (id)initWithLanguages:location:calendarType:url:;
- (void)setAdditionalAuthenticationHeaders:;
- (id)urlsToResults;
@end
