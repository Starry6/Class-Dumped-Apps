@interface UIKBHandwritingCandidateView : UIKBCandidateView
- (id)initWithFrame:keyplane:key:;
- (void)updateForKeyplane:key:;
- (void)updateCandidateKey;
+ (double)shadowYForBounds:shadowHeight:;
@end
