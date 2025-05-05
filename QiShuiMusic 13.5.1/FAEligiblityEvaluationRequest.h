@interface FAEligiblityEvaluationRequest : FAFamilyCircleRequest
@property (nonatomic) NSString propertyName;
@property (nonatomic) NSString bundleID;
- (id)propertyName;
- (void).cxx_destruct;
- (id)bundleID;
- (id)initWithPropertyName:bundleID:;
- (void)startRequestWithCompletion:;
- (unsigned long long)fetchEligibilityWithError:;
@end
