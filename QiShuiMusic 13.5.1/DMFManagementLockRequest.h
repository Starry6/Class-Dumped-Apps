@interface DMFManagementLockRequest : DMFTaskRequest
@property (nonatomic) NSString lockedByLabel;
@property (nonatomic) NSString passcode;
- (id)passcode;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setPasscode:;
- (id)lockedByLabel;
- (void)setLockedByLabel:;
+ (BOOL)supportsSecureCoding;
@end
