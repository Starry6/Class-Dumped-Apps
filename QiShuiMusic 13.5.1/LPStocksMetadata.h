@interface LPStocksMetadata : LPSpecializationMetadata
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString combinedTitle;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString footnote;
@property (nonatomic) LPImage icon;
- (id)icon;
- (void)setSubtitle:;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)title;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)subtitle;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setFootnote:;
- (id)footnote;
- (id)presentationPropertiesForTransformer:;
- (BOOL)canGeneratePresentationPropertiesForURL:;
- (id)previewSummaryForTransformer:;
- (id)previewImageForTransformer:;
- (void)_enumerateAsynchronousFields:;
- (id)combinedTitle;
- (void)setCombinedTitle:;
+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
@end
