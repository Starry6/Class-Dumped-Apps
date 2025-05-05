@interface IESLivePlaybackApiImpl : NSObject
@property (nonatomic) q pingCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchEncryptedByteCastInfoForPaidPlaybackWithEpisodeID:completion:;
- (void)fetchEnterWithParams:completion:;
- (void)fetchOtherPlaybacksWithSeasonID:episodeID:userID:currentSeason:seasonType:needReverse:cursor:pageSize:roomID:completion:;
- (void)fetchPingEpisode:duration:videoCode:;
- (void)fetchPlaybackListWithRoomID:episodeID:completion:;
- (void)fetchPlaybackWithRoomId:completion:;
- (void)fetchPlaybackWithRoomId:matchId:completion:;
- (void)fetchRoomScreenCastSettingWithRoom:completion:;
- (void)fetchSeriesPlaybackListWithRoomID:ticketID:parenTicketID:completion:;
- (void)fetchVideoInfoWithEpisodeID:completion:;
- (void)leaveWithEpisodeID:duration:didPlayFinished:videoCode:;
- (void)updateHistoryWithSeasonId:episodeId:seq:msec:;
- (long long)pingCount;
- (void)setPingCount:;
@end
