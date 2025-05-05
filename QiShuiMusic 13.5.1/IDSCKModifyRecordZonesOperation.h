@interface IDSCKModifyRecordZonesOperation : IDSCKDatabaseOperation
@property (nonatomic) NSArray recordZonesToSave;
@property (nonatomic) NSArray recordZoneIDsToDelete;
@property (nonatomic) @? modifyRecordZonesCompletionBlock;
@property (nonatomic) q qualityOfService;
- (void)setQualityOfService:;
- (void)setRecordZonesToSave:;
- (id)recordZonesToSave;
- (id)recordZoneIDsToDelete;
- (long long)qualityOfService;
- (void)setModifyRecordZonesCompletionBlock:;
- (void)setRecordZoneIDsToDelete:;
- (void).cxx_destruct;
- (id)modifyRecordZonesCompletionBlock;
+ (id)alloc;
+ (Class)__class;
@end
