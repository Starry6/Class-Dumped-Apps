@interface CKRecordZoneNotification : CKNotification
@property (nonatomic) CKRecordZoneID recordZoneID;
@property (nonatomic) q databaseScope;
- (long long)databaseScope;
- (void)setDatabaseScope:;
- (id)initWithCoder:;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setRecordZoneID:;
- (id)recordZoneID;
- (id)initWithRemoteNotificationDictionary:;
+ (BOOL)supportsSecureCoding;
@end
