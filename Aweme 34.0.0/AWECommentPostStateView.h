@interface AWECommentPostStateView : UILabel
@property (nonatomic) BOOL isBGColorWhite;
@property (nonatomic) @? retryActionBlock;
- (void)setIsBGColorWhite:;
- (BOOL)isBGColorWhite;
- (void)onUIThemeChange;
- (void)showRetryingState;
- (void)showFailedState;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)retryActionBlock;
- (void)setRetryActionBlock:;
- (void)tapAction:;
@end
