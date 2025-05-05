@interface NSCloudKitMirroringFetchRecordsRequest : NSCloudKitMirroringImportRequest
@property (nonatomic) NSArray objectIDsToFetch;
@property (nonatomic) NSDictionary entityNameToAttributesToFetch;
- (void)dealloc;
- (id)objectIDsToFetch;
- (BOOL)validateForUseWithStore:error:;
- (id)entityNameToAttributesToFetch;
- (void)setObjectIDsToFetch:;
- (id)initWithOptions:completionBlock:;
- (void)setEntityNameToAttributesToFetch:;
- (void)setEntityNameToAttributeNamesToFetch:;
@end
