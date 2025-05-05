@interface ICMusicKitRequestContext : ICStoreRequestContext
@property (nonatomic) q _storeRequestPersonalizationStyle;
@property (nonatomic) q personalizationStyle;
@property (nonatomic) <ICDeveloperTokenProvider> developerTokenProvider;
@property (nonatomic) q personalizationMethod;
@property (nonatomic) NSString playbackAuthorizationToken;
@property (nonatomic) NSString collectionPlaybackAuthorizationToken;
- (long long)personalizationStyle;
- (id)_description;
- (void)setDeveloperTokenProvider:;
- (id)playbackAuthorizationToken;
- (void)setPlaybackAuthorizationToken:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithBlock:;
- (void)setPersonalizationMethod:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)developerTokenProvider;
- (id)collectionPlaybackAuthorizationToken;
- (id)description;
- (long long)personalizationMethod;
- (void)setPersonalizationStyle:;
- (id)copyWithBlock:;
- (void)setCollectionPlaybackAuthorizationToken:;
- (long long)_storeRequestPersonalizationStyle;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
