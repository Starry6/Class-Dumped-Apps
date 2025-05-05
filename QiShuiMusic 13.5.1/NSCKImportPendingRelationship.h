@interface NSCKImportPendingRelationship : NSManagedObject
@property (nonatomic) NSString recordName;
@property (nonatomic) NSString cdEntityName;
@property (nonatomic) NSString relatedRecordName;
@property (nonatomic) NSString relatedEntityName;
@property (nonatomic) NSString relationshipName;
@property (nonatomic) NSString recordZoneName;
@property (nonatomic) NSString recordZoneOwnerName;
@property (nonatomic) NSString relatedRecordZoneName;
@property (nonatomic) NSString relatedRecordZoneOwnerName;
@property (nonatomic) NSNumber needsDelete;
@property (nonatomic) NSCKImportOperation operation;
@end
