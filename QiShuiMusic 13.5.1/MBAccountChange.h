@interface MBAccountChange : NSObject
@property (nonatomic) NSString accountIdentifier;
@property (nonatomic) NSString personaIdentifier;
@property (nonatomic) BOOL isPrimaryAccount;
@property (nonatomic) q changeType;
- (long long)changeType;
- (id)accountIdentifier;
- (id)personaIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAccountIdentifier:personaIdentifier:isPrimaryAccount:changeType:;
- (BOOL)isPrimaryAccount;
+ (BOOL)supportsSecureCoding;
@end
