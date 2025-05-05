@interface RPCompanionLinkAssertion : NSObject
@property (nonatomic) NSString assertionID;
@property (nonatomic) RPCompanionLinkClient client;
@property (nonatomic) NSString destinationID;
@property (nonatomic) NSString identifier;
- (id)identifier;
- (void)setClient:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)client;
- (void)setAssertionID:;
- (void).cxx_destruct;
- (id)description;
- (id)assertionID;
- (void)invalidate;
- (void)setIdentifier:;
- (id)destinationID;
- (void)setDestinationID:;
+ (BOOL)supportsSecureCoding;
@end
