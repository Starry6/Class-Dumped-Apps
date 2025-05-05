@interface OTJoiningConfiguration : NSObject
@property (nonatomic) NSString protocolType;
@property (nonatomic) NSString uniqueDeviceID;
@property (nonatomic) NSString uniqueClientID;
@property (nonatomic) NSString pairingUUID;
@property (nonatomic) Q epoch;
@property (nonatomic) BOOL isInitiator;
@property (nonatomic) q timeout;
- (void)setEpoch:;
- (void)setTimeout:;
- (id)initWithCoder:;
- (unsigned long long)epoch;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (long long)timeout;
- (id)initWithProtocolType:uniqueDeviceID:uniqueClientID:pairingUUID:epoch:isInitiator:;
- (id)protocolType;
- (void)setProtocolType:;
- (id)uniqueDeviceID;
- (void)setUniqueDeviceID:;
- (id)uniqueClientID;
- (void)setUniqueClientID:;
- (id)pairingUUID;
- (void)setPairingUUID:;
- (BOOL)isInitiator;
- (void)setIsInitiator:;
+ (BOOL)supportsSecureCoding;
@end
