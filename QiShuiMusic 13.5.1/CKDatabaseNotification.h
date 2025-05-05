@interface CKDatabaseNotification : CKNotification
@property (nonatomic) q databaseScope;
@property (nonatomic) CKRecordZoneID recordZoneID;
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
