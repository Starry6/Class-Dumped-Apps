@interface VNRecognizedPointsObservation : VNObservation
@property (nonatomic) VNRecognizedPointsSpecifier recognizedPointsSpecifier;
@property (nonatomic) NSNumber groupIdentifier;
@property (nonatomic) NSArray availableKeys;
@property (nonatomic) NSArray availableGroupKeys;
- (id)debugQuickLookObject;
- (id)groupIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)availableKeys;
- (id)availableGroupKeys;
- (id)vn_cloneObject;
- (id)initWithOriginatingRequestSpecifier:keypointReturningObservation:;
- (id)recognizedPointsSpecifier;
- (id)recognizedPointsForGroupKey:error:;
- (id)recognizedPointForKey:error:;
- (id)keypointsMultiArrayAndReturnError:;
- (void)addAllJointsToPath:imageSize:;
+ (BOOL)supportsSecureCoding;
@end
