@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask
@property (nonatomic) NSString previousSyncToken;
@property (nonatomic) NSString nextSyncToken;
@property (nonatomic) BOOL moreToSync;
@property (nonatomic) BOOL wasInvalidSyncToken;
- (id)requestBody;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:;
- (BOOL)wasInvalidSyncToken;
- (id)copyDefaultParserForContentType:;
- (void).cxx_destruct;
- (BOOL)moreToSync;
- (id)notFoundHREFs;
- (id)description;
- (id)previousSyncToken;
- (BOOL)hadUnexpectedChangeOfSyncTokenWithZeroResponses;
- (id)nextSyncToken;
- (id)initWithPropertiesToFind:atURL:withDepth:previousSyncToken:;
@end
