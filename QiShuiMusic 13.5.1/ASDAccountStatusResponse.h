@interface ASDAccountStatusResponse : NSObject
@property (nonatomic) NSNumber accountID;
@property (nonatomic) q accountStatus;
@property (nonatomic) BOOL hasCachedFamilyInfo;
@property (nonatomic) BOOL hasErrorStatus;
- (id)accountID;
- (void)setAccountID:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)accountStatus;
- (void).cxx_destruct;
- (void)setAccountStatus:;
- (id)initWithAccountID:;
- (BOOL)hasErrorStatus;
- (BOOL)hasResponseFlag:;
- (BOOL)hasCachedFamilyInfo;
- (void)setHasCachedFamilyInfo:;
+ (BOOL)supportsSecureCoding;
@end
