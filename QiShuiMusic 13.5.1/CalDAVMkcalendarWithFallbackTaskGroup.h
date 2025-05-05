@interface CalDAVMkcalendarWithFallbackTaskGroup : CoreDAVTaskGroup
@property (nonatomic) NSSet fallbackElements;
@property (nonatomic) BOOL shouldSupportVEVENT;
@property (nonatomic) BOOL shouldSupportVTODO;
@property (nonatomic) NSDictionary headersToOverride;
@property (nonatomic) NSDictionary responseHeaders;
- (void)startTaskGroup;
- (id)responseHeaders;
- (void).cxx_destruct;
- (void)setResponseHeaders:;
- (id)initWithAccountInfoProvider:taskManager:primaryPropertiesToSet:fallbackPropertiesToSet:atURL:;
- (void)_mkcalendarAfterFailureCount:;
- (BOOL)shouldSupportVEVENT;
- (void)setShouldSupportVEVENT:;
- (BOOL)shouldSupportVTODO;
- (void)setShouldSupportVTODO:;
- (id)headersToOverride;
- (void)setHeadersToOverride:;
- (id)fallbackElements;
- (void)setFallbackElements:;
@end
