@interface CATSharingDevice : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) NSString modelIdentifier;
@property (nonatomic) q RSSI;
@property (nonatomic) BOOL paired;
@property (nonatomic) Q pairingState;
@property (nonatomic) NSDate detectionTime;
- (long long)RSSI;
- (id)identifier;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)modelIdentifier;
- (BOOL)isPaired;
- (void).cxx_destruct;
- (unsigned long long)pairingState;
- (BOOL)isEqualToDevice:;
- (BOOL)isEqual:;
- (id)initWithIdentifier:modelIdentifier:RSSI:paired:pairingState:detectionTime:;
- (id)detectionTime;
+ (id)unlocalizedDescriptivePairingStateForPairingState:;
@end
