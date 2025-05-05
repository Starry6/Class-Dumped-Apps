@interface IESLiveGiftAPIImpl : HTSLiveApi
@property (nonatomic) <IESLiveMonitor> monitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fetchGiftListWithRoomModel:label:fetchMomentType:toRoom:toUser:scene:forGiftID:requestGiftIDs:selectedGiftID:extraParams:callback:;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
@end
