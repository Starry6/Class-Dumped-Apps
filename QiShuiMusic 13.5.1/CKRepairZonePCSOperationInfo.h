@interface CKRepairZonePCSOperationInfo : CKDatabaseOperationInfo
@property (nonatomic) NSArray zoneIDs;
- (id)initWithCoder:;
- (void)setZoneIDs:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)zoneIDs;
+ (BOOL)supportsSecureCoding;
@end
