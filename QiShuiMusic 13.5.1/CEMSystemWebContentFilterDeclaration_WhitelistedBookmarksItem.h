@interface CEMSystemWebContentFilterDeclaration_WhitelistedBookmarksItem : CEMPayloadBase
@property (nonatomic) NSString payloadURL;
@property (nonatomic) NSString payloadBookmarkPath;
@property (nonatomic) NSString payloadTitle;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)payloadURL;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (void)setPayloadURL:;
- (id)payloadTitle;
- (void)setPayloadTitle:;
- (id)payloadBookmarkPath;
- (void)setPayloadBookmarkPath:;
+ (id)allowedPayloadKeys;
+ (id)buildWithURL:withBookmarkPath:withTitle:;
+ (id)buildRequiredOnlyWithURL:withTitle:;
@end
