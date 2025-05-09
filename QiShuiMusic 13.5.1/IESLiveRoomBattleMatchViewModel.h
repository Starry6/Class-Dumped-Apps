@interface IESLiveRoomBattleMatchViewModel : NSObject
@property (nonatomic) IESLiveRoomBattleApi api;
@property (nonatomic) BOOL needAutoMatch;
@property (nonatomic) NSString requestPage;
@property (nonatomic) BOOL didTrackButtonShow;
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
@property (nonatomic) q status;
@property (nonatomic) <IESLiveRoomBattleMatchViewModelDelegate> deleagte;
@property (nonatomic) IESLiveLinkMicProfitRoomBattleRandomMatchReservationContent reserveContent;
@property (nonatomic) IESLiveLinkMicProfitRoomBattleRandomMatchMatchingContent matchingContent;
@property (nonatomic) IESLiveRoomBattleMatchWaitingContent waitingContent;
@property (nonatomic) NSInteger matchType;
- (id)matchingContent;
- (void)setRequestPage:;
- (void)autoMatchWithType:;
- (id)buttonCommonTrackParams:;
- (void)cancelReserve;
- (id)deleagte;
- (BOOL)didTrackButtonShow;
- (void)fetchEntrance:completion:;
- (BOOL)iamOperator;
- (id)initWithMatchType:;
- (BOOL)isSelfMatchSuccess;
- (BOOL)isSelfMatching;
- (void)matchSuccess:;
- (BOOL)needAutoMatch;
- (id)requestPage;
- (void)requestSpeedupMatch;
- (id)reserveContent;
- (void)setDeleagte:;
- (void)setDidTrackButtonShow:;
- (void)setMatchingContent:;
- (void)setNeedAutoMatch:;
- (void)setReserveContent:;
- (void)setWaitingContent:;
- (void)startReserve;
- (void)startWaiting;
- (void)trackMatchButtonClick:;
- (void)trackMatchButtonShow:;
- (void)trackMatchResult:;
- (id)waitingContent;
- (void)setStatus:;
- (void).cxx_destruct;
- (long long)status;
- (int)matchType;
- (id)room;
- (void)setRoom:;
- (void)cancelMatching;
- (id)api;
- (void)setMatchType:;
- (BOOL)isMatching;
- (void)startMatching;
- (void)setApi:;
@end
