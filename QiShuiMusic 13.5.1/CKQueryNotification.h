@interface CKQueryNotification : CKNotification
@property (nonatomic) q queryNotificationReason;
@property (nonatomic) NSDictionary recordFields;
@property (nonatomic) CKRecordID recordID;
@property (nonatomic) q databaseScope;
- (long long)databaseScope;
- (void)setDatabaseScope:;
- (id)initWithCoder:;
- (void)setRecordID:;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:;
- (id)recordID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRemoteNotificationDictionary:;
- (long long)queryNotificationReason;
- (void)setQueryNotificationReason:;
- (id)recordFields;
- (void)setRecordFields:;
- (BOOL)isPublicDatabase;
+ (BOOL)supportsSecureCoding;
@end
