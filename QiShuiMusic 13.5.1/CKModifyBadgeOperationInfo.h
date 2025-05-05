@interface CKModifyBadgeOperationInfo : CKDatabaseOperationInfo
@property (nonatomic) Q badgeValue;
- (unsigned long long)badgeValue;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setBadgeValue:;
+ (BOOL)supportsSecureCoding;
@end
