@interface NSCKMirroredRelationship : NSManagedObject
@property (nonatomic) NSString ckRecordID;
@property (nonatomic) NSData ckRecordSystemFields;
@property (nonatomic) NSString cdEntityName;
@property (nonatomic) NSString recordName;
@property (nonatomic) NSString relatedEntityName;
@property (nonatomic) NSString relatedRecordName;
@property (nonatomic) NSString relationshipName;
@property (nonatomic) NSNumber isPending;
@property (nonatomic) NSNumber needsDelete;
@property (nonatomic) NSNumber isUploaded;
@property (nonatomic) NSCKRecordZoneMetadata recordZone;
+ (id)entityPath;
@end
