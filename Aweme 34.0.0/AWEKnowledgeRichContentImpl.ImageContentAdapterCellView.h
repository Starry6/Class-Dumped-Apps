@interface AWEKnowledgeRichContentImpl.ImageContentAdapterCellView : BDMultiContentContainer.ImageContentCellView
- (id)pinchTargetView;
- (id)pinchBackgroundViewWithFrame:;
- (BOOL)isContentReady;
- (id)imagePlayerFrame;
- (id)imagePlayerView;
- (id)customContainerRectForCalculateVideoFrame;
- (id)clipVideoDelegate;
- (BOOL)stickersDidTap:;
- (id)currentContentRect;
- (id)stickersFetchCurrentImageView;
- (void)updateSticker;
- (void)dealloc;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:;
@end
