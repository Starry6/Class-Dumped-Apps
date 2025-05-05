@interface BNPlay.BNSongFeedParam : BNCommonAdapter.BNRouteBasicParam
@property (nonatomic) NSString trackId;
@property (nonatomic) NSString commentId;
@property (nonatomic) BOOL fromWidget;
- (id)commentId;
- (BOOL)fromWidget;
- (void)setCommentId:;
- (void)setFromWidget:;
- (id)init;
- (void).cxx_destruct;
- (void)setTrackId:;
- (id)trackId;
@end
