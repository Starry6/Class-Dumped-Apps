@interface CKQuerySubscription : CKSubscription
@property (nonatomic) NSPredicate predicate;
@property (nonatomic) Q querySubscriptionOptions;
@property (nonatomic) NSString recordType;
@property (nonatomic) CKRecordZoneID zoneID;
- (id)initWithRecordType:predicate:subscriptionID:options:;
- (void)setRecordType:;
- (void)_validateQuerySubscriptionOptions:;
- (id)initWithRecordType:predicate:options:;
- (void)setQuerySubscriptionOptions:;
- (id)zoneID;
- (void)setZoneID:;
- (id)initWithCoder:;
- (id)predicate;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:;
- (void)setPredicate:;
- (void).cxx_destruct;
- (unsigned long long)querySubscriptionOptions;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
