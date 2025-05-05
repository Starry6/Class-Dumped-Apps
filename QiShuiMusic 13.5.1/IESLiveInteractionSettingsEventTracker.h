@interface IESLiveInteractionSettingsEventTracker : NSObject
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
@property (nonatomic) <IESLiveInteractionSettingsRouter> interactionSettings;
@property (nonatomic) HTSEventContext eventContext;
@property (nonatomic) BOOL hasEverTurnOnAllowAdminOperateGuest;
@property (nonatomic) <IESLiveCompoundSubscription> disposable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)interactionModeEndedWithLayout:;
- (void)didSetAttachingDIContext;
- (void)didSwitchAudienceSettingWithKey:value:;
- (void)didSwitchSettingWithKey:value:;
- (id)disposable;
- (BOOL)hasEverTurnOnAllowAdminOperateGuest;
- (id)initWithEventContext:room:;
- (void)setDisposable:;
- (void)setEventContext:;
- (void)setHasEverTurnOnAllowAdminOperateGuest:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)eventContext;
- (id)room;
- (void)setRoom:;
- (id)interactionSettings;
- (void)setInteractionSettings:;
@end
