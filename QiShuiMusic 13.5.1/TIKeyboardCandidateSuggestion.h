@interface TIKeyboardCandidateSuggestion : TIKeyboardCandidate
@property (nonatomic) UITextSuggestion textSuggestion;
- (id)input;
- (id)label;
- (void).cxx_destruct;
- (unsigned long long)customInfoType;
- (id)candidate;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithSuggestion:customInfoType:;
- (id)textSuggestion;
+ (id)candidateWithSuggestion:;
+ (id)candidateWithSuggestion:customInfoType:;
@end
