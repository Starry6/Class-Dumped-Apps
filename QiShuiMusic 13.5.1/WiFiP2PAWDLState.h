@interface WiFiP2PAWDLState : NSObject
@property (nonatomic) NSString interfaceName;
@property (nonatomic) BOOL supportsSoloMode;
@property (nonatomic) NSArray channelSequence;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) I substate;
@property (nonatomic) WiFiMACAddress macAddress;
@property (nonatomic) WiFiChannel peerMasterChannel;
@property (nonatomic) WiFiChannel peerPrimaryPreferredChannel;
@property (nonatomic) WiFiChannel peerSecondaryPreferredChannel;
- (id)macAddress;
- (id)channelSequence;
- (id)initWithCoder:;
- (id)peerSecondaryPreferredChannel;
- (id)peerMasterChannel;
- (void)encodeWithCoder:;
- (unsigned int)substate;
- (void).cxx_destruct;
- (id)peerPrimaryPreferredChannel;
- (id)description;
- (id)interfaceName;
- (BOOL)supportsSoloMode;
- (id)initWithInterfaceName:supportsSoloMode:channelSequence:isEnabled:substate:macAddress:peerMasterChannel:peerPrimaryPreferredChannel:peerSecondaryPreferredChannel:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEnabled;
+ (id)currentState;
+ (BOOL)supportsSecureCoding;
@end
