@interface MPServerObjectDatabaseMediaKitImportRequest : MPServerObjectDatabaseMetadataImportRequest
- (id)initWithPayload:;
- (id)_sinfDataFromSinfType:payload:;
- (id)performWithDatabaseOperations:augmentingPayload:trustID:playActivityFeatureName:;
- (long long)_sinfTypeFromPayload:;
+ (id)_relationshipKeyForObject:;
+ (id)_unsupportedParentChildRelationships;
+ (id)_unsupportedMediaKitTypes;
+ (id)_childKeyForParentType:type:;
@end
