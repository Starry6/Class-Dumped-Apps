@interface LPApplePhotosStatusMetadata : LPSpecializationMetadata
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSAttributedString status;
- (void)setStatus:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)status;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)presentationPropertiesForTransformer:;
- (BOOL)canGeneratePresentationPropertiesForURL:;
+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
@end
