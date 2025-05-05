@interface IESLiveVSFinishAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)innerUrlString:;
- (void)fetchRoomInfoWithRoomID:completion:;
- (void)goLiveRoom:params:isDrawEnabled:ownerUserId:roomId:trackContext:;
- (void)goLiveRoomWithDictionary:resultDic:isDrawEnabled:ownerUserId:roomId:trackContext:;
- (void)initRoomServiceWithTrackContext:;
- (BOOL)isPersonalRecommendSwitchOn;
- (id)p_getHomePageHotLiveCellInnerFeedURL;
- (id)p_getLiveMergeFeedURL;
@end
