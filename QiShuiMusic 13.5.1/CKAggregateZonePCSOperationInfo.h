@interface CKAggregateZonePCSOperationInfo : CKDatabaseOperationInfo
@property (nonatomic) NSArray sourceZoneIDs;
@property (nonatomic) CKRecordZone targetZone;
- (id)initWithCoder:;
- (void)setTargetZone:;
- (id)targetZone;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)sourceZoneIDs;
- (void)setSourceZoneIDs:;
+ (BOOL)supportsSecureCoding;
@end
