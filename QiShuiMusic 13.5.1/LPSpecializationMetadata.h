@interface LPSpecializationMetadata : NSObject
@property (nonatomic) BOOL _dummyPropertyForObservation;
@property (nonatomic) BOOL _canDeferAsynchronousFieldsMetadataUpdateUntilCompletion;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (void)_enumerateAsynchronousFields:;
- (BOOL)_dummyPropertyForObservation;
- (BOOL)_canDeferAsynchronousFieldsMetadataUpdateUntilCompletion;
+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
@end
