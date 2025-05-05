@interface ICRadioLibraryArtistContentReference : ICRadioContentReference
@property (nonatomic) NSString artistName;
@property (nonatomic) NSNumber representativeCloudIdentifier;
@property (nonatomic) NSNumber storeIdentifier;
- (id)artistName;
- (id)storeIdentifier;
- (long long)contentType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setArtistName:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setStoreIdentifier:;
- (id)rawContentDictionaryWithSubscriptionStatus:;
- (id)matchDictionaryWithSubscriptionStatus:;
- (id)representativeCloudIdentifier;
- (void)setRepresentativeCloudIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
