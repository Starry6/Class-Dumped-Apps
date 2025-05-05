@interface CEMNetworkWiFiDeclaration_QoSMarkingPolicy : CEMPayloadBase
@property (nonatomic) NSArray payloadQoSMarkingWhitelistedAppIdentifiers;
@property (nonatomic) NSNumber payloadQoSMarkingAppleAudioVideoCalls;
@property (nonatomic) NSNumber payloadQoSMarkingEnabled;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadQoSMarkingWhitelistedAppIdentifiers;
- (void)setPayloadQoSMarkingWhitelistedAppIdentifiers:;
- (id)payloadQoSMarkingAppleAudioVideoCalls;
- (void)setPayloadQoSMarkingAppleAudioVideoCalls:;
- (id)payloadQoSMarkingEnabled;
- (void)setPayloadQoSMarkingEnabled:;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithQoSMarkingWhitelistedAppIdentifiers:withQoSMarkingAppleAudioVideoCalls:withQoSMarkingEnabled:;
@end
