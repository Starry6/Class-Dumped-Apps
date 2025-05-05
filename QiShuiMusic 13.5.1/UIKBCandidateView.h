@interface UIKBCandidateView : UIKBKeyView
@property (nonatomic) {?=b6b1b1b8b8b8} visualStyling;
@property (nonatomic) UIView candidateKey;
- (void)dealloc;
- (void)displayLayer:;
- (id)candidateKey;
- (void)setVisualStyling:;
- (id)candidateList;
- (id)visualStyling;
- (void).cxx_destruct;
- (id)initWithFrame:keyplane:key:;
- (void)updateForKeyplane:key:;
- (BOOL)isTenKey;
- (void)updateCandidateKey;
- (void)clearCandidateKey;
- (void)setCandidateKey:;
@end
