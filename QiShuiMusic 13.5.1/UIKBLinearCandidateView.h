@interface UIKBLinearCandidateView : UIKBHandwritingCandidateView
- (void)updateCandidateKey;
- (id)getConfiguration;
- (void)refreshSelectedCandidate;
- (void)refreshSelectedCandidateAnimated:;
- (unsigned long long)focusableVariantCount;
@end
