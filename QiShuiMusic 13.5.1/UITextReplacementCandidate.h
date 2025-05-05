@interface UITextReplacementCandidate : TIKeyboardCandidateSingle
@property (nonatomic) UITextReplacement replacement;
- (id)label;
- (void).cxx_destruct;
- (id)_initWithTextReplacement:;
- (id)replacement;
+ (id)textReplacementCandidateForTextReplacement:;
@end
