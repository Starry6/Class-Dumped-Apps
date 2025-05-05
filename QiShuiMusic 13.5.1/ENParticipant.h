@interface ENParticipant : NSObject
@property (nonatomic) <ENAccountPublicKey> accountPublicKey;
@property (nonatomic) NSSet aliases;
@property (nonatomic) NSArray devices;
@property (nonatomic) BOOL supportsEngram;
- (void)setDevices:;
- (id)aliases;
- (id)devices;
- (void)setAliases:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)deviceWithIdentifier:;
- (id)initWithAccountPublicKey:aliases:devices:;
- (id)accountPublicKey;
- (BOOL)supportsEngram;
- (void)setAccountPublicKey:;
+ (id)participantsFromEndpoints:;
+ (id)participantsByAlias:;
+ (BOOL)supportsSecureCoding;
@end
