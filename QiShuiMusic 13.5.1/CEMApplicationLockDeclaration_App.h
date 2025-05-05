@interface CEMApplicationLockDeclaration_App : CEMPayloadBase
@property (nonatomic) NSString payloadIdentifier;
@property (nonatomic) CEMApplicationLockDeclaration_AppOptions payloadOptions;
@property (nonatomic) CEMApplicationLockDeclaration_AppUserEnabledOptions payloadUserEnabledOptions;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)payloadIdentifier;
- (void)setPayloadIdentifier:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadOptions;
- (void)setPayloadOptions:;
- (id)payloadUserEnabledOptions;
- (void)setPayloadUserEnabledOptions:;
+ (id)buildRequiredOnlyWithIdentifier:;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:withOptions:withUserEnabledOptions:;
@end
