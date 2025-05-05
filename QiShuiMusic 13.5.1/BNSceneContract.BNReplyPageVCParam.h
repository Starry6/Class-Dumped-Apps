@interface BNSceneContract.BNReplyPageVCParam : BNCommonAdapter.BNRouteBasicParam
@property (nonatomic) NSString commentJson;
@property (nonatomic) NSString trackId;
@property (nonatomic) NSString subCommentId;
@property (nonatomic) BOOL needInputPanel;
- (void)setCommentJson:;
- (id)commentJson;
- (BOOL)needInputPanel;
- (void)setNeedInputPanel:;
- (void)setSubCommentId:;
- (id)subCommentId;
- (id)init;
- (void).cxx_destruct;
- (void)setTrackId:;
- (id)trackId;
@end
