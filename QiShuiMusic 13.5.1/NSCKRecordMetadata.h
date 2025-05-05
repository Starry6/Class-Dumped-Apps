@interface NSCKRecordMetadata : NSManagedObject
@property (nonatomic) NSString ckRecordName;
@property (nonatomic) NSData ckRecordSystemFields;
@property (nonatomic) NSData encodedRecord;
@property (nonatomic) NSNumber entityId;
@property (nonatomic) NSNumber entityPK;
@property (nonatomic) NSData ckShare;
@property (nonatomic) NSCKRecordZoneMetadata recordZone;
@property (nonatomic) BOOL needsUpload;
@property (nonatomic) BOOL needsLocalDelete;
@property (nonatomic) BOOL needsCloudDelete;
@property (nonatomic) NSNumber lastExportedTransactionNumber;
@property (nonatomic) NSNumber pendingExportTransactionNumber;
@property (nonatomic) NSNumber pendingExportChangeTypeNumber;
@property (nonatomic) NSSet moveReceipts;
- (id)createEncodedMoveReceiptData:;
- (BOOL)mergeMoveReceiptsWithData:error:;
- (id)createRecordFromSystemFields;
+ (id)recordFromEncodedData:error:;
+ (id)entityPath;
+ (id)encodeRecord:error:;
+ (id)insertMetadataForObject:setRecordName:inZoneWithID:recordNamePrefix:error:;
@end
