@interface IESECCommentItemVideoCell : UICollectionViewCell
@property (nonatomic) IESECVideoPlayerView videoPlayerView;
@property (nonatomic) IESECHeadVideoModel headVideoModel;
- (id)currentPlayerView;
- (id)headVideoModel;
- (void)setHeadVideoModel:;
- (void)updateMediaCellWithVideoModel:;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)videoPlayerView;
- (void)setVideoPlayerView:;
@end
