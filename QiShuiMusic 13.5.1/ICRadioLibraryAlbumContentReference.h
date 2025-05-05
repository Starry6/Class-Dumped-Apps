@interface ICRadioLibraryAlbumContentReference : ICRadioContentReference
@property (nonatomic) NSString albumName;
@property (nonatomic) NSNumber representativeCloudIdentifier;
@property (nonatomic) NSNumber storeIdentifier;
- (id)albumName;
- (id)storeIdentifier;
- (void)setAlbumName:;
- (long long)contentType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setStoreIdentifier:;
- (id)rawContentDictionaryWithSubscriptionStatus:;
- (id)matchDictionaryWithSubscriptionStatus:;
- (id)representativeCloudIdentifier;
- (void)setRepresentativeCloudIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
