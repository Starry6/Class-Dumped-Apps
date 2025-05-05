@interface CEMNetworkVPNDeclaration_AlwaysOnServiceException : CEMPayloadBase
@property (nonatomic) NSString payloadServiceName;
@property (nonatomic) NSString payloadAction;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadAction;
- (void)setPayloadAction:;
- (id)payloadServiceName;
- (void)setPayloadServiceName:;
+ (id)allowedPayloadKeys;
+ (id)buildWithServiceName:withAction:;
+ (id)buildRequiredOnlyWithServiceName:withAction:;
@end
