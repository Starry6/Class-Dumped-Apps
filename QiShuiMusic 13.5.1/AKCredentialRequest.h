@interface AKCredentialRequest : NSObject
@property (nonatomic) NSString userIdentifier;
@property (nonatomic) NSString altDSID;
@property (nonatomic) NSUUID requestIdentifier;
@property (nonatomic) NSUUID transactionID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)transactionID;
- (id)requestIdentifier;
- (id)init;
- (id)altDSID;
- (id)userIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setUserIdentifier:;
- (void)setRequestIdentifier:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
