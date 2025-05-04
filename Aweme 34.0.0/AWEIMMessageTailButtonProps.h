@interface AWEIMMessageTailButtonProps : AWEIMUIViewPresenterProps
@property (nonatomic) BOOL showReplyButton;
@property (nonatomic) @? tapAction;
@property (nonatomic) q style;
@property (nonatomic) BOOL enableAnimation;
@property (nonatomic) BOOL iconHidden;
- (void)setShowReplyButton:;
- (BOOL)showReplyButton;
- (BOOL)enableAnimation;
- (long long)style;
- (void).cxx_destruct;
- (void)setEnableAnimation:;
- (void)setStyle:;
- (id)tapAction;
- (void)setTapAction:;
- (BOOL)iconHidden;
- (void)setIconHidden:;
@end
