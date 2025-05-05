@interface HTSLiveCommentApi : HTSLiveApi
@property (nonatomic) <IESLiveRoomServiceAdapter> roomModel;
- (id)channelCommentTypeWithRequestModel:;
- (id)episodeInfoString;
- (void)fetchAudioChatCodeFinished:;
- (void)fetchCommentInventionsWithSentence:preSentence:roomID:completion:;
- (void)fetchSilenceBlockInfoWithCompletion:;
- (id)roomModel;
- (void)sendBarrage:finished:;
- (void)sendChannelCommentWithRequestModel:channelID:callBack:;
- (void)sendCommentWithRequestModel:callBack:;
- (void)sendPrivilegeDanmaku:style:completion:;
- (void)setAudioChat:finished:;
- (void)setRoomModel:;
- (void)uploadAnchorSpeechAudioWithPath:duration:atUserContent:content:completion:;
- (void)uploadAudioWithPath:duration:flowTime:completion:;
- (void).cxx_destruct;
@end
