@interface CRMLCCModel : CRMLModel
- (id)init;
- (id)creditcardResultsFromImage:;
- (id)creditcardResultsFromImage:textFeatures:invert:tryPatternMatch:;
- (id)creditcardMLResultsFromImage:textFeatures:invert:tryPatternMatch:;
@end
