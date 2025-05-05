@interface ENParticipantDevice : NSObject
@property (nonatomic) <ENCypher> cypher;
@property (nonatomic) <ENDevicePublicKey> devicePublicKey;
@property (nonatomic) NSData identifier;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)verifyAndRevealData:withReceipient:cypherIdentifier:error:;
- (id)devicePublicKey;
- (id)initWithDevicePublicKey:cypher:identifier:;
- (id)cypher;
- (void)setCypher:;
- (id)signAndConcealData:withSender:cypherIdentifier:error:;
+ (id)participantDeviceFromEndpoint:;
+ (BOOL)supportsSecureCoding;
@end
