@interface UIMovieScrubberTrackView : UIView
@property (nonatomic) <UIMovieScrubberTrackViewDataSource> dataSource;
@property (nonatomic) <UIMovieScrubberTrackViewDelegate> delegate;
- (void)reloadData;
- (void)setDataSource:;
- (void)layoutSubviews;
- (void)setDelegate:;
- (void)setEditing:;
- (id)initWithFrame:;
- (void)setValue:;
- (void)clear;
- (id)dataSource;
- (id)delegate;
- (BOOL)zoomAtPoint:;
- (void).cxx_destruct;
- (void)setZoomAnimationDuration:;
- (void)setThumbnailImage:forTimestamp:;
- (void)animateFillFramesAway;
- (void)setStartValue:;
- (void)setEndValue:;
- (id)_createImageViewForTimestamp:isSummaryThumbnail:;
- (void)_reallyReloadData;
- (double)zoomAnimationDuration;
- (void)_setOverlayViewIsZoomed:minValue:maxValue:;
- (void)unzoom;
- (void)_zoomAnimationDidFinish;
- (void)_unzoomAnimationDidFinish;
@end
