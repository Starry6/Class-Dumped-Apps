@interface IDSCTSIM : NSObject
@property (nonatomic) CTXPCServiceSubscriptionContext context;
@property (nonatomic) NSString SIMIdentifier;
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) NSString label;
@property (nonatomic) BOOL isDefaultVoiceSIM;
@property (nonatomic) Q slot;
@property (nonatomic) NSString mobileCountryCode;
@property (nonatomic) NSString mobileNetworkCode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)slot;
- (id)phoneNumber;
- (id)context;
- (id)mobileNetworkCode;
- (id)label;
- (id)initWithContext:;
- (void).cxx_destruct;
- (id)description;
- (id)mobileCountryCode;
- (void)setContext:;
- (id)SIMIdentifier;
- (BOOL)isDefaultVoiceSIM;
@end
