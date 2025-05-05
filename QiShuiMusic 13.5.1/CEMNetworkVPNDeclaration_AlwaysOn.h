@interface CEMNetworkVPNDeclaration_AlwaysOn : CEMPayloadBase
@property (nonatomic) NSArray payloadTunnelConfigurations;
@property (nonatomic) NSNumber payloadUIToggleEnabled;
@property (nonatomic) NSArray payloadServiceExceptions;
@property (nonatomic) NSNumber payloadAllowCaptiveWebSheet;
@property (nonatomic) NSNumber payloadAllowAllCaptiveNetworkPlugins;
@property (nonatomic) NSArray payloadAllowedCaptiveNetworkPlugins;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadTunnelConfigurations;
- (void)setPayloadTunnelConfigurations:;
- (id)payloadUIToggleEnabled;
- (void)setPayloadUIToggleEnabled:;
- (id)payloadServiceExceptions;
- (void)setPayloadServiceExceptions:;
- (id)payloadAllowCaptiveWebSheet;
- (void)setPayloadAllowCaptiveWebSheet:;
- (id)payloadAllowAllCaptiveNetworkPlugins;
- (void)setPayloadAllowAllCaptiveNetworkPlugins:;
- (id)payloadAllowedCaptiveNetworkPlugins;
- (void)setPayloadAllowedCaptiveNetworkPlugins:;
+ (id)allowedPayloadKeys;
+ (id)buildWithTunnelConfigurations:withUIToggleEnabled:withServiceExceptions:withAllowCaptiveWebSheet:withAllowAllCaptiveNetworkPlugins:withAllowedCaptiveNetworkPlugins:;
+ (id)buildRequiredOnlyWithTunnelConfigurations:;
@end
