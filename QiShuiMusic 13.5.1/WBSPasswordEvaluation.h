@interface WBSPasswordEvaluation : NSObject
@property (nonatomic) NSString password;
@property (nonatomic) NSArray patternMatches;
@property (nonatomic) q evaluationType;
@property (nonatomic) double guessesRequired;
@property (nonatomic) Q strength;
@property (nonatomic) BOOL userShouldBeShownPassiveWarning;
@property (nonatomic) BOOL userShouldBeShownActiveWarning;
@property (nonatomic) WBSPasswordPatternMatch bestPatternMatchForUserFeedback;
- (unsigned long long)strength;
- (id)password;
- (unsigned long long)hash;
- (long long)evaluationType;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (BOOL)userShouldBeShownPassiveWarning;
- (double)guessesRequired;
- (id)initWithEvaluationType:password:patternMatches:guessesRequired:;
- (BOOL)userShouldBeShownActiveWarning;
- (unsigned long long)_userFeedbackLengthScoreForPatternMatch:;
- (id)bestPatternMatchForUserFeedback;
- (id)_bestPatternMatchOfType:;
- (BOOL)_shouldShowUserFeedbackStringsForWordListPatternMatch:;
- (id)_passwordFeedbackStringWithPasswordVisibility:;
- (id)userFeedbackStringWithPasswordVisibility:;
- (id)compactDescriptionWithPasswordColumnWidth:includePatternMatches:;
- (id)patternMatches;
@end
