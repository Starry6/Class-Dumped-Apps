@interface CWFRangingPeer : NSObject
@property (nonatomic) NSString MACAddress;
@property (nonatomic) NSData identifier;
@property (nonatomic) NSData PMK;
@property (nonatomic) Q numberOfMeasurements;
@property (nonatomic) BOOL useCoreRotation;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setIdentifier:;
- (id)MACAddress;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setMACAddress:;
- (BOOL)isEqualToRangingPeer:;
- (id)PMK;
- (void)setPMK:;
- (unsigned long long)numberOfMeasurements;
- (void)setNumberOfMeasurements:;
- (BOOL)useCoreRotation;
- (void)setUseCoreRotation:;
+ (BOOL)supportsSecureCoding;
+ (id)rangingPeerWithMACAddress:PMK:;
@end
