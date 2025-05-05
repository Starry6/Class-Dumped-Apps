@interface CEMSystemBasicWebContentFilterDeclaration_SiteWhiteListItem : CEMPayloadBase
@property (nonatomic) NSString payloadAddress;
@property (nonatomic) NSString payloadBookmarkPath;
@property (nonatomic) NSString payloadPageTitle;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setPayloadAddress:;
- (void)setPayloadPageTitle:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadAddress;
- (id)payloadBookmarkPath;
- (void)setPayloadBookmarkPath:;
- (id)payloadPageTitle;
+ (id)buildWithAddress:withPageTitle:;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithAddress:;
@end
