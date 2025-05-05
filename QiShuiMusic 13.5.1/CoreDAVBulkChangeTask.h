@interface CoreDAVBulkChangeTask : CoreDAVTask
@property (nonatomic) NSDictionary uuidsToAddActions;
@property (nonatomic) NSDictionary hrefsToModDeleteActions;
@property (nonatomic) NSString nextCTag;
@property (nonatomic) NSSet bulkChangeResponses;
- (id)requestBody;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:;
- (id)copyDefaultParserForContentType:;
- (id)additionalHeaderValues;
- (void).cxx_destruct;
- (id)nextCTag;
- (void)fillOutDataWithUUIDsToAddActions:hrefsToModDeleteActions:;
- (id)initWithURL:checkCTag:simple:returnChangedData:uuidsToAddActions:hrefsToModDeleteActions:;
- (id)uuidsToAddActions;
- (id)hrefsToModDeleteActions;
- (id)bulkChangeResponses;
@end
