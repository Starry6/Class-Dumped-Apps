@interface SFAutoFillPasskey : NSObject
@property (nonatomic) WBSAutoFillPasskey corePasskey;
@property (nonatomic) NSString username;
@property (nonatomic) NSString relyingPartyIdentifier;
@property (nonatomic) SFAutoFillPasskeyIdentifier identifier;
@property (nonatomic) NSData userHandle;
- (id)username;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)relyingPartyIdentifier;
- (id)userHandle;
- (id)initWithCoreAutoFillPasskey:;
- (id)corePasskey;
+ (BOOL)supportsSecureCoding;
@end
