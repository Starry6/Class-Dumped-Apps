@interface MPServerObjectDatabaseStorePlatformImportRequest : MPServerObjectDatabaseMetadataImportRequest
- (id)initWithPayload:;
- (id)performWithDatabaseOperations:augmentingPayload:trustID:playActivityFeatureName:;
+ (id)_relationshipKeyForObject:;
+ (id)_unsupportedParentChildRelationships;
+ (id)_childKeyForParentType:type:;
+ (id)_unsupportedStorePlatformKinds;
@end
