@interface IESLiveSaaSRankListApi : HTSLiveApi
@property (nonatomic) <IESLiveMonitor> monitor;
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) BOOL isAnchor;
- (void)requestRankListWithType:isHourEntryInfo:completion:;
- (void)setIsAnchor:;
- (BOOL)isAnchor;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
- (id)room;
- (void)setRoom:;
@end
