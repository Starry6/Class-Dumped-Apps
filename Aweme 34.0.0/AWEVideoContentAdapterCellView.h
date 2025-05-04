@interface AWEVideoContentAdapterCellView : BDMultiContentContainer.VideoContentCellView
@property (nonatomic) <AFDClipVideoPlayerAdapterProtocol> videoContentDelegate;
- (id)pinchTargetView;
- (id)pinchBackgroundViewWithFrame:;
- (BOOL)isContentReady;
- (id)imagePlayerFrame;
- (id)imagePlayerView;
- (id)clipVideoDelegate;
- (id)getVideoContentDelegate;
- (void)updateWithAdapterContentModel:adapterCellModel:;
- (BOOL)stickersDidTap:;
- (id)currentContentRect;
- (id)stickersFetchCurrentImageView;
- (id)videoContentDelegate;
- (void)updateSticker;
- (void)setVideoContentDelegate:;
- (void)dealloc;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:;
@end
