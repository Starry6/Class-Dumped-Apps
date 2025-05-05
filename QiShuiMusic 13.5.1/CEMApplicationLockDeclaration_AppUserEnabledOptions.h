@interface CEMApplicationLockDeclaration_AppUserEnabledOptions : CEMPayloadBase
@property (nonatomic) NSNumber payloadVoiceOver;
@property (nonatomic) NSNumber payloadZoom;
@property (nonatomic) NSNumber payloadInvertColors;
@property (nonatomic) NSNumber payloadAssistiveTouch;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadVoiceOver;
- (void)setPayloadVoiceOver:;
- (id)payloadZoom;
- (void)setPayloadZoom:;
- (id)payloadInvertColors;
- (void)setPayloadInvertColors:;
- (id)payloadAssistiveTouch;
- (void)setPayloadAssistiveTouch:;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithVoiceOver:withZoom:withInvertColors:withAssistiveTouch:;
@end
