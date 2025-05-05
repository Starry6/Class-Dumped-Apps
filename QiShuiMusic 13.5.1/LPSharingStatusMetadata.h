@interface LPSharingStatusMetadata : LPSpecializationMetadata
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSAttributedString status;
- (void)setStatus:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)status;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)presentationPropertiesForTransformer:;
- (BOOL)canGeneratePresentationPropertiesForURL:;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
@end
