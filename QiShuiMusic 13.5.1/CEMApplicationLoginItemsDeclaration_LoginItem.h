@interface CEMApplicationLoginItemsDeclaration_LoginItem : CEMPayloadBase
@property (nonatomic) NSString payloadPath;
@property (nonatomic) NSNumber payloadHide;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadPath;
- (void)setPayloadPath:;
- (id)payloadHide;
- (void)setPayloadHide:;
+ (id)allowedPayloadKeys;
+ (id)buildWithPath:withHide:;
+ (id)buildRequiredOnlyWithPath:;
@end
