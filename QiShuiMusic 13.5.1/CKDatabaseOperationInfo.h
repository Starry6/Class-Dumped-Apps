@interface CKDatabaseOperationInfo : CKOperationInfo
@property (nonatomic) q databaseScope;
- (long long)databaseScope;
- (void)setDatabaseScope:;
- (id)activityCreate;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)takeValuesFrom:;
+ (BOOL)supportsSecureCoding;
@end
