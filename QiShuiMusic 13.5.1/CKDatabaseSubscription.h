@interface CKDatabaseSubscription : CKSubscription
@property (nonatomic) NSString recordType;
- (id)init;
- (void)setRecordType:;
- (id)initWithCoder:;
- (id)CKPropertiesDescription;
- (id)initWithSubscriptionID:;
+ (id)new;
+ (BOOL)supportsSecureCoding;
@end
