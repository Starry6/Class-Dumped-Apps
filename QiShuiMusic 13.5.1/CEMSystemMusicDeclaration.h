@interface CEMSystemMusicDeclaration : CEMConfigurationBase
@property (nonatomic) NSNumber payloadAllowMusicService;
@property (nonatomic) NSNumber payloadAllowRadioService;
@property (nonatomic) NSNumber payloadAllowMusicArtistActivity;
@property (nonatomic) NSNumber payloadAllowMusicVideos;
@property (nonatomic) NSNumber payloadAllowSharedLibraries;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadAllowMusicService;
- (void)setPayloadAllowMusicService:;
- (id)payloadAllowRadioService;
- (void)setPayloadAllowRadioService:;
- (id)payloadAllowMusicArtistActivity;
- (void)setPayloadAllowMusicArtistActivity:;
- (id)payloadAllowMusicVideos;
- (void)setPayloadAllowMusicVideos:;
- (id)payloadAllowSharedLibraries;
- (void)setPayloadAllowSharedLibraries:;
+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:withAllowMusicService:withAllowRadioService:withAllowMusicArtistActivity:withAllowMusicVideos:withAllowSharedLibraries:;
+ (id)buildWithIdentifier:withAllowMusicService:withAllowRadioService:withAllowMusicArtistActivity:withAllowMusicVideos:;
@end
