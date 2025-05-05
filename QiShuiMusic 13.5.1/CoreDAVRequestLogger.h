@interface CoreDAVRequestLogger : NSObject
@property (nonatomic) NSArray headerSortDescriptors;
- (id)_inflateRequestBody:;
- (void)logCoreDAVResponseSnippet:withTaskIdentifier:;
- (id)initWithProvider:;
- (void)logCoreDAVResponseSnippet:withTaskIdentifier:isBody:;
- (void)setHeaderSortDescriptors:;
- (void)logCoreDAVRequest:withTaskIdentifier:;
- (void).cxx_destruct;
- (void)logCoreDAVResponseSnippet:;
- (void)logCoreDAVResponseHeaders:andStatusCode:withTaskIdentifier:;
- (id)headerSortDescriptors;
- (void)finishCoreDAVResponse;
+ (id)_redactedHeadersFromHeaders:;
@end
