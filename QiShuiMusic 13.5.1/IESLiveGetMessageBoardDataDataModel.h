@interface IESLiveGetMessageBoardDataDataModel : IESLiveBridgeModel
@property (nonatomic) NSString commentList;
@property (nonatomic) NSString selfCommentList;
@property (nonatomic) NSString uiConfig;
@property (nonatomic) NSString likeRelation;
@property (nonatomic) NSString dressInfo;
- (void)setCommentList:;
- (id)selfCommentList;
- (id)commentList;
- (id)dressInfo;
- (id)likeRelation;
- (void)setDressInfo:;
- (void)setLikeRelation:;
- (void)setSelfCommentList:;
- (void)setUiConfig:;
- (id)uiConfig;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
@end
