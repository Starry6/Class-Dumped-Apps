@interface AWEPostPageLocalLifeMatchMissionHandler : NSObject
@property (nonatomic) q cleanLocalLifeMatchMissionSignal;
@property (nonatomic) <AWEPostPageContext> context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindServices:;
- (BOOL)isLocalLifeMatchMissionFromTask;
- (void)trackCommonMissionEventWithEventType:missionState:;
- (void)trackLifeMissionEventWithEventType:idx:hasTask:;
- (long long)cleanLocalLifeMatchMissionSignal;
- (void)setCleanLocalLifeMatchMissionSignal:;
- (void).cxx_destruct;
- (id)context;
- (id)taskID;
+ (void)_aweLazyRegisterPostPage;
@end
