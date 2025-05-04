@interface AWELVideoStateInFeed : MTLModel
@property (nonatomic) BOOL showPreviewEndView;
@property (nonatomic) BOOL beReplaced;
@property (nonatomic) AWELongVideoFeedPaymentInfoBody previewEndInfo;
@property (nonatomic) BOOL transferToDetailBySchema;
@property (nonatomic) BOOL didFetchPaymentInfo;
@property (nonatomic) double likeFeedWatchHistory;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isShowingPreviewEnd;
- (void)setShowPreviewEndView:;
- (BOOL)beReplaced;
- (void)setBeReplaced:;
- (id)previewEndInfo;
- (void)setPreviewEndInfo:;
- (BOOL)transferToDetailBySchema;
- (void)setTransferToDetailBySchema:;
- (BOOL)didFetchPaymentInfo;
- (void)setDidFetchPaymentInfo:;
- (double)likeFeedWatchHistory;
- (void)setLikeFeedWatchHistory:;
- (void).cxx_destruct;
@end
