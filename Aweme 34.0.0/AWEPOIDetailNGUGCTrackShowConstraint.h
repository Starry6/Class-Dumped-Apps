@interface AWEPOIDetailNGUGCTrackShowConstraint : NSObject
@property (nonatomic) <DitoComponentViewModel> viewModel;
@property (nonatomic) {CGPoint=dd} lastContentOffset;
@property (nonatomic) BOOL isLimiting;
@property (nonatomic) @? didModalViewCompleteShow;
- (void)didHalfConainerStateChangeToFullScreen;
- (void)removeScrollLimit;
- (void)willShowWithTrackBlock:;
- (void)didCompleteShowWithTrackBlock:;
- (void)reportRecordedTrackShow;
- (id)didModalViewCompleteShow;
- (void)trackShowIfDidSlideUpWithBlock:;
- (void)setIsLimiting:;
- (id)didSlideUpKey;
- (id)didShowButNotTrackListKey;
- (BOOL)isLimiting;
- (void)setDidModalViewCompleteShow:;
- (id)prefix;
- (id)initWithViewModel:;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)context;
- (void)didScroll:;
- (id)lastContentOffset;
- (void)setLastContentOffset:;
@end
