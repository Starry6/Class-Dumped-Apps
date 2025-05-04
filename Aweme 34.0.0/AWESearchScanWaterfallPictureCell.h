@interface AWESearchScanWaterfallPictureCell : AWESearchScanWaterfallBaseCellController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackShow;
- (void)componentWillDisplay;
- (void)trackClick;
- (void)didStartShowing;
- (void)cardSingleTapped:;
- (id)getTrackBaseParams;
- (void)gotoPictureDetailPage;
- (id)transitionContext;
- (id)componentView;
- (void)setupUI;
- (void)updateWithViewModel:;
- (void)updateWithModel:;
+ (id)sizeWithViewModel:width:;
+ (double)getVideoHeightWidthRatioForAweme:isWaterfallLayout:;
@end
