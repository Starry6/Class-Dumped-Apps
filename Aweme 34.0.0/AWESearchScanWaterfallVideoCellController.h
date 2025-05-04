@interface AWESearchScanWaterfallVideoCellController : AWESearchScanWaterfallBaseCellController
@property (nonatomic) NSDictionary logData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)logExtraDict;
- (void)trackShow;
- (void)componentWillDisplay;
- (void)trackClick;
- (void)didStartShowing;
- (void)cardSingleTapped:;
- (id)getTrackBaseParams;
- (id)logData;
- (void)setLogData:;
- (id)transitionContext;
- (void).cxx_destruct;
- (id)componentView;
- (void)updateWithViewModel:;
- (void)updateWithModel:;
+ (id)sizeWithViewModel:width:;
@end
