@interface WiFiAwareFastDiscoveryConfiguration : NSObject
@property (nonatomic) NSNumber instantCommunicationChannel;
@property (nonatomic) C peerBandInformation;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)instantCommunicationChannel;
- (void)setInstantCommunicationChannel:;
- (unsigned char)peerBandInformation;
- (void)setPeerBandInformation:;
+ (BOOL)supportsSecureCoding;
@end
