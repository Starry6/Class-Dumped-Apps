@interface UIHandwritingAssistantView : UIKBKeyView
@property (nonatomic) TUISystemInputAssistantView systemInputAssistantView;
@property (nonatomic) UIKBHandwritingCandidateView candidateView;
@property (nonatomic) UIKeyboardCandidatePocketShadow rightBorder;
- (void)dimKeys:;
- (id)systemInputAssistantView;
- (void)displayLayer:;
- (BOOL)pointInside:withEvent:;
- (id)hitTest:withEvent:;
- (id)candidateList;
- (void).cxx_destruct;
- (void)setSystemInputAssistantView:;
- (id)candidateView;
- (id)initWithFrame:keyplane:key:;
- (void)updateForKeyplane:key:;
- (void)setCandidateView:;
- (id)assistantFrameForKeyplane:key:;
- (id)rightBorder;
- (void)setRightBorder:;
@end
