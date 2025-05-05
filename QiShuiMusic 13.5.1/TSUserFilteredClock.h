@interface TSUserFilteredClock : TSKernelClock
@property (nonatomic) Q nominalMachInterval;
@property (nonatomic) Q nominalDomainInterval;
@property (nonatomic) C filterShift;
@property (nonatomic) BOOL adaptive;
- (BOOL)isAdaptive;
- (void).cxx_destruct;
- (id)initWithImplXPC:;
- (BOOL)addTimestampWithMachAbsolute:andDomainTime:error:;
- (BOOL)resetSyncServiceWithError:;
- (BOOL)resetFilterToNominal:error:;
- (unsigned long long)nominalMachInterval;
- (unsigned long long)nominalDomainInterval;
- (unsigned char)filterShift;
+ (id)diagnosticDescriptionForInfo:withIndent:;
+ (id)iokitMatchingDictionaryForClockIdentifier:;
+ (id)keyPathsForValuesAffectingNominalMachInterval;
+ (id)keyPathsForValuesAffectingNominalDomainInterval;
+ (id)keyPathsForValuesAffectingFilterShift;
+ (id)keyPathsForValuesAffectingAdaptive;
@end
