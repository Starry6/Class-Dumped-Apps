@interface IESLivePublicScreenMessageHeatAttachment : NSObject
@property (nonatomic) IESLiveGCDTimer hotRoomCountTimer;
@property (nonatomic) q hotJudgeMessageCount;
@property (nonatomic) q coldJudgeMessageCount;
@property (nonatomic) q receivedMsgCountInDuration;
@property (nonatomic) q currentMessageRoomHeat;
@property (nonatomic) NSHashTable heatSubscribers;
@property (nonatomic) IESLivePublicScreenDataFlowManager dataFlowManager;
@property (nonatomic) IESLivePublicScreenContext publicScreenContext;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) @? didAttach;
@property (nonatomic) @? didDetach;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)abilityProtocol;
- (id)dataFlowManager;
- (id)heatSubscribers;
- (void)addHeatSubscriber:;
- (void)calculateRoomHeatWithMsgCountInDuration:;
- (long long)coldJudgeMessageCount;
- (long long)currentMessageRoomHeat;
- (id)didAttach;
- (id)didDetach;
- (long long)hotJudgeMessageCount;
- (id)hotRoomCountTimer;
- (id)messageListHotJudgeConfig;
- (id)publicScreenContext;
- (void)publicScreenMessageProcessed:;
- (long long)receivedMsgCountInDuration;
- (void)removeHeatSubscriber:;
- (void)setColdJudgeMessageCount:;
- (void)setCurrentMessageRoomHeat:;
- (void)setDataFlowManager:;
- (void)setDidAttach:;
- (void)setDidDetach:;
- (void)setHeatSubscribers:;
- (void)setHotJudgeMessageCount:;
- (void)setHotRoomCountTimer:;
- (void)setPublicScreenContext:;
- (void)setReceivedMsgCountInDuration:;
- (void)setTrackContext:;
- (void)setupHotRoomCountTimerWithDuration:;
- (BOOL)shouldActive;
- (id)trackContext;
- (void)detach;
- (void)dealloc;
- (void)attach;
- (id)type;
- (void)setup;
- (void).cxx_destruct;
@end
