@interface CKRecordZoneSubscription : CKSubscription
@property (nonatomic) CKRecordZoneID zoneID;
@property (nonatomic) NSString recordType;
- (id)initWithZoneID:;
- (void)setRecordType:;
- (id)zoneID;
- (id)initWithCoder:;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithZoneID:subscriptionID:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
