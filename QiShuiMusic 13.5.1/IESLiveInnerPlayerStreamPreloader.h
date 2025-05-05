@interface IESLiveInnerPlayerStreamPreloader : NSObject
@property (nonatomic) IESLiveSaaSStreamPlayer streamPlayer;
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)streamPlayerGetCurrentRoomModel;
- (void)cancelPreloadPlayerStream;
- (void)clearPreloadPlayerStream;
- (void)setStreamPlayer:;
- (id)streamPlayer;
- (id)streamPlayerGetCurrentPullData;
- (void)tryPreloadPlayerStreamWithRoomModel:containerView:;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
@end
