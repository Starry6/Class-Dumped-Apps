@interface AWEMusicStreamingImpl.BNLyricModePlayLyricView : UIView
- (void)scrollViewDidScroll:;
- (void)scrollViewWillBeginDragging:;
- (void)scrollViewDidEndDecelerating:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void)hideAnchorView;
- (void)showAnchorView;
- (void)setPlayTime:animated:isManual:;
- (void)bindDataSourceWithDataSource:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:;
@end
