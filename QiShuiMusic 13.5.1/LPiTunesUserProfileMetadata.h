@interface LPiTunesUserProfileMetadata : LPSpecializationMetadata
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString name;
@property (nonatomic) LPImage artwork;
@property (nonatomic) LPArtworkMetadata artworkMetadata;
- (id)artwork;
- (void)setName:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setArtwork:;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)presentationPropertiesForTransformer:;
- (BOOL)canGeneratePresentationPropertiesForURL:;
- (id)previewSummaryForTransformer:;
- (id)previewImageForTransformer:;
- (void)populateMetadataForBackwardCompatibility:;
- (void)_enumerateAsynchronousFields:;
- (id)artworkMetadata;
- (void)setArtworkMetadata:;
+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
@end
