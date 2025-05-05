@interface CEMClassroomRequestMirroringCommand : CEMCommandBase
@property (nonatomic) NSString payloadDestinationName;
@property (nonatomic) NSString payloadDestinationDeviceID;
@property (nonatomic) NSNumber payloadScanTime;
@property (nonatomic) NSString payloadPassword;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)mustBeSupervised;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (int)executionLevel;
- (id)payloadDestinationName;
- (void)setPayloadDestinationName:;
- (id)payloadDestinationDeviceID;
- (void)setPayloadDestinationDeviceID:;
- (id)payloadScanTime;
- (void)setPayloadScanTime:;
- (id)payloadPassword;
- (void)setPayloadPassword:;
+ (id)buildRequiredOnlyWithIdentifier:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:withDestinationName:withDestinationDeviceID:withScanTime:withPassword:;
@end
