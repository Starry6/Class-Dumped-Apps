@interface CoreDAVMultiPutTask : CoreDAVTask
@property (nonatomic) NSString nextCTag;
@property (nonatomic) NSDictionary uuidToHREF;
@property (nonatomic) NSDictionary hrefToETag;
@property (nonatomic) NSDictionary uuidToStatus;
@property (nonatomic) NSDictionary hrefToStatus;
@property (nonatomic) NSDictionary uuidToErrorItems;
@property (nonatomic) NSDictionary hrefToErrorItems;
- (id)requestBody;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:;
- (id)copyDefaultParserForContentType:;
- (id)additionalHeaderValues;
- (void).cxx_destruct;
- (id)nextCTag;
- (id)uuidToHREF;
- (id)hrefToETag;
- (id)uuidToErrorItems;
- (id)hrefToErrorItems;
- (id)uuidToStatus;
- (id)hrefToStatus;
- (id)initWithURL:checkCTag:uuidsToAddActions:hrefsToModDeleteActions:;
- (void)fillOutDataWithUUIDsToAddActions:hrefsToModDeleteActions:;
@end
