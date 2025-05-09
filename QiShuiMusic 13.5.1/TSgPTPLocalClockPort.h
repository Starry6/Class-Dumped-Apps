@interface TSgPTPLocalClockPort : TSgPTPPort
@property (nonatomic) C localOscillatorType;
@property (nonatomic) BOOL hasLocalFrequencyToleranceLower;
@property (nonatomic) NSInteger localFrequencyToleranceLower;
@property (nonatomic) BOOL hasLocalFrequencyToleranceUpper;
@property (nonatomic) NSInteger localFrequencyToleranceUpper;
@property (nonatomic) BOOL hasLocalFrequencyStabilityLower;
@property (nonatomic) NSInteger localFrequencyStabilityLower;
@property (nonatomic) BOOL hasLocalFrequencyStabilityUpper;
@property (nonatomic) NSInteger localFrequencyStabilityUpper;
- (void).cxx_destruct;
- (unsigned char)localOscillatorType;
- (BOOL)hasLocalFrequencyToleranceLower;
- (int)localFrequencyToleranceLower;
- (BOOL)hasLocalFrequencyToleranceUpper;
- (int)localFrequencyToleranceUpper;
- (BOOL)hasLocalFrequencyStabilityLower;
- (int)localFrequencyStabilityLower;
- (BOOL)hasLocalFrequencyStabilityUpper;
- (int)localFrequencyStabilityUpper;
- (id)initWithImplXPC:;
+ (id)diagnosticDescriptionForInfo:withIndent:;
+ (id)keyPathsForValuesAffectingLocalOscillatorType;
+ (id)keyPathsForValuesAffectingHasLocalFrequencyToleranceLower;
+ (id)keyPathsForValuesAffectingLocalFrequencyToleranceLower;
+ (id)keyPathsForValuesAffectingHasLocalFrequencyToleranceUpper;
+ (id)keyPathsForValuesAffectingLocalFrequencyToleranceUpper;
+ (id)keyPathsForValuesAffectingHasLocalFrequencyStabilityLower;
+ (id)keyPathsForValuesAffectingLocalFrequencyStabilityLower;
+ (id)keyPathsForValuesAffectingHasLocalFrequencyStabilityUpper;
+ (id)keyPathsForValuesAffectingLocalFrequencyStabilityUpper;
@end
