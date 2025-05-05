@interface CHPostprocessingStep : NSObject
@property (nonatomic) BOOL modifiesOriginalTokens;
- (id)process:options:;
- (BOOL)modifiesOriginalTokens;
+ (id)applyTransform:toAllTokens:;
+ (void)expandPathsWithCorrectedTokens:fromTokens:correctedTokenPath:originalTokenPath:;
+ (BOOL)shouldAdjustColumnsFromPostprocessingStepOptions:;
@end
