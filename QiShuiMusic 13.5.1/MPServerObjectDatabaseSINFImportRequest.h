@interface MPServerObjectDatabaseSINFImportRequest : MPServerObjectDatabaseAssetImportRequest
- (void).cxx_destruct;
- (BOOL)performWithDatabaseOperations:error:;
- (id)initWithPayload:requestPayload:hashedPersonID:;
@end
