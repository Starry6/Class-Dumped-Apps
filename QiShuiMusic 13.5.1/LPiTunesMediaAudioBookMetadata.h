@interface LPiTunesMediaAudioBookMetadata : LPSpecializationMetadata
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString storeFrontIdentifier;
@property (nonatomic) NSString storeIdentifier;
@property (nonatomic) NSString name;
@property (nonatomic) NSString author;
@property (nonatomic) NSString narrator;
@property (nonatomic) LPImage artwork;
@property (nonatomic) LPArtworkMetadata artworkMetadata;
@property (nonatomic) NSURL previewURL;
- (id)storeIdentifier;
- (id)artwork;
- (void)setName:;
- (id)author;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)previewURL;
- (void).cxx_destruct;
- (void)setAuthor:;
- (void)setArtwork:;
- (id)storeFrontIdentifier;
- (id)name;
- (void)setStoreFrontIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setStoreIdentifier:;
- (void)setPreviewURL:;
- (id)presentationPropertiesForTransformer:;
- (BOOL)canGeneratePresentationPropertiesForURL:;
- (id)previewSummaryForTransformer:;
- (id)previewImageForTransformer:;
- (void)populateMetadataForBackwardCompatibility:;
- (void)_enumerateAsynchronousFields:;
- (id)artworkMetadata;
- (void)setArtworkMetadata:;
- (id)narrator;
- (void)setNarrator:;
- (id)storeIdentifierForTransformer:;
+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
@end
