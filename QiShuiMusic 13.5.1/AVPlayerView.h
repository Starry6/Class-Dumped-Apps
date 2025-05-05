@interface AVPlayerView : AVPresentationContainerView
@property (nonatomic) BOOL needsInitialLayout;
@property (nonatomic) UIView contentView;
- (id)initWithFrame:contentView:;
- (id)contentView;
- (void)layoutSubviews;
- (BOOL)needsInitialLayout;
- (void).cxx_destruct;
- (void)_beginManagingContentViewIfNeeded;
- (void)_stopManagingContentView;
- (void)setContentView:;
- (void)setNeedsInitialLayout:;
@end
