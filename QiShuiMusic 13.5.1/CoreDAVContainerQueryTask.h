@interface CoreDAVContainerQueryTask : CoreDAVTask
@property (nonatomic) <CoreDAVContainerQueryTaskDelegate> delegate;
- (id)requestBody;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:;
- (id)copyDefaultParserForContentType:;
- (void).cxx_destruct;
- (id)initWithSearchTerms:searchLimit:atURL:appSpecificDataItemClass:;
- (id)initWithSearchString:searchLimit:atURL:appSpecificDataItemClass:;
- (id)_initWithSearchTerms:searchLimit:atURL:appSpecificDataItemClass:;
- (void)addFiltersToXMLData:;
+ (id)_copySearchTermsFromSearchString:;
@end
