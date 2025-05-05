@interface LPApplePhotosSharedLibraryInvitationMetadata : LPSpecializationMetadata
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString message;
- (void)setMessage:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)message;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)presentationPropertiesForTransformer:;
- (BOOL)canGeneratePresentationPropertiesForURL:;
- (id)previewSummaryForTransformer:;
- (id)previewImageForTransformer:;
+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
@end
