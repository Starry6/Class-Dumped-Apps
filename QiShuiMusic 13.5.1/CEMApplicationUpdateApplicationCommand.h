@interface CEMApplicationUpdateApplicationCommand : CEMCommandBase
@property (nonatomic) NSString payloadBundleIdentifier;
@property (nonatomic) NSNumber payloadImmediate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)mustBeSupervised;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadBundleIdentifier;
- (void)setPayloadBundleIdentifier:;
- (int)executionLevel;
- (id)payloadImmediate;
- (void)setPayloadImmediate:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:withBundleIdentifier:;
+ (id)buildWithIdentifier:withBundleIdentifier:withImmediate:;
@end
