@interface AWECommentAudioStateView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) Q style;
@property (nonatomic) Q state;
@property (nonatomic) BOOL isBGColorWhite;
- (void)setIsBGColorWhite:;
- (BOOL)isBGColorWhite;
- (id)initWithStyle:isBGColorWhite:;
- (void)onCommentUIThemeChange;
- (void)updateCommentAudioState:;
- (void)updateStartPlayImageView;
- (void)updateDefaultStateImageView;
- (unsigned long long)state;
- (unsigned long long)style;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setImageView:;
- (void)setState:;
- (id)imageView;
- (void)setStyle:;
- (void)setupUI;
@end
