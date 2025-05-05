@interface LPAppleTVMetadata : LPSpecializationMetadata
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) LPImage artwork;
- (id)artwork;
- (void)setSubtitle:;
- (void)setTitle:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (void)setArtwork:;
- (id)subtitle;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)presentationPropertiesForTransformer:;
- (BOOL)canGeneratePresentationPropertiesForURL:;
- (id)previewSummaryForTransformer:;
- (id)previewImageForTransformer:;
- (void)_enumerateAsynchronousFields:;
+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
@end
