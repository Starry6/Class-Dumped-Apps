@interface AWERTVVoipMissCallDependencyHelper : NSObject
@property (nonatomic) <RxInjector> injector;
@property (nonatomic) RTVVoipTracker tracker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)rxAwakeFromPropertyInjection;
- (BOOL)isInnerPushEnableForUserID:;
- (BOOL)isInnerPushEnable;
- (BOOL)isInnerPushEnableForCid:;
- (id)isValidGroupForCid:;
- (void)enterConversationDetailVCWithUserID:;
- (id)isExistRoomIDForCid:;
- (void)enterGroupChatWithCid:autoJoinRoom:roomID:invitees:invokeIfNeed:;
- (id)tracker;
- (id)injector;
- (void).cxx_destruct;
@end
