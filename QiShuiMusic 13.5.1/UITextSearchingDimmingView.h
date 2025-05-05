@interface UITextSearchingDimmingView : UIView
@property (nonatomic) {UIEdgeInsets=dddd} contentInset;
@property (nonatomic) NSArray textRects;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (id)contentInset;
- (void).cxx_destruct;
- (void)setContentInset:;
- (void)setTextRects:;
- (void)_updatePunchoutPathForVisibleRect:;
- (BOOL)_wantsTargetOfKeyboardEventDeferringEnvironment;
- (id)textRects;
@end
