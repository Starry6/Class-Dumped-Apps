@interface CEMDeviceHomeScreenLayoutDeclaration_IconItem : CEMPayloadBase
@property (nonatomic) NSString payloadType;
@property (nonatomic) NSString payloadDisplayName;
@property (nonatomic) NSString payloadBundleID;
@property (nonatomic) NSArray payloadPages;
@property (nonatomic) NSString payloadURL;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)payloadType;
- (void)setPayloadType:;
- (id)payloadBundleID;
- (id)payloadURL;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (void)setPayloadURL:;
- (id)payloadPages;
- (void)setPayloadPages:;
- (id)payloadDisplayName;
- (void)setPayloadDisplayName:;
- (void)setPayloadBundleID:;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithType:;
+ (id)buildWithType:withDisplayName:withBundleID:withPages:withURL:;
@end
