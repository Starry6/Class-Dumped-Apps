@interface CoreDAVPropertyFindBaseTask : CoreDAVTask
@property (nonatomic) NSSet propertiesToFind;
@property (nonatomic) CoreDAVMultiStatusItem multiStatus;
- (void)updateMultiStatusFromResponse;
- (id)propertiesToFind;
- (void)finishCoreDAVTaskWithError:;
- (id)successfulValueForNameSpace:elementName:;
- (id)initWithPropertiesToFind:atURL:;
- (id)copyDefaultParserForContentType:;
- (id)additionalHeaderValues;
- (void).cxx_destruct;
- (id)parseHints;
- (void)setMultiStatus:;
- (id)multiStatus;
- (id)description;
- (void)setPropertiesToFind:;
- (id)getTotalFailureError;
@end
