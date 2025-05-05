@interface IESLivePlaybackCommentAPIImpl : NSObject
@property (nonatomic) HTSLiveEpisode itemModel;
@property (nonatomic) NSDictionary extraParamsForOnce;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)agreeCommentWithAggreeMsgId:comment:commentColors:flowTime:elapsedTime:callBack:;
- (id)extraParamsForOnce;
- (void)fetchJsbAllTopicListWithEpisodeID:callBack:;
- (void)fetchJsbPannelTopicListWithEpisodeID:topicID:callBack:;
- (id)itemModel;
- (void)searchSuggestUserWithParams:callback:;
- (void)sendComment:agressMsgId:flowTime:elapsedTime:colors:episode:callback:;
- (void)sendComment:flowTime:elapsedTime:callBack:;
- (void)sendDanmaku:commentColors:flowTime:elapsedTime:callBack:;
- (void)setExtraParamsForOnce:;
- (void)setItemModel:;
- (void).cxx_destruct;
- (id)episodeId;
@end
