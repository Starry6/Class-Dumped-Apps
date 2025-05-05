@interface IESLiveSaaSConfigurableShortTouchStore : NSObject
@property (nonatomic) IESLiveSaaSConfigurableShortTouchApi api;
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) <IESLiveSaaSConfigurableShortTouchReaction> reaction;
@property (nonatomic) IESLiveSaaSComponentContext componentContext;
- (id)animationRecord;
- (id)clickRecord;
- (void)clickType:;
- (id)componentContext;
- (void)fetchShortTouchInfo;
- (BOOL)needShowAnimation:;
- (void)setComponentContext:;
- (void)setTrackContext:;
- (void)showAnimationType:;
- (id)trackContext;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
- (id)reaction;
- (id)api;
- (void)setReaction:;
- (id)initWithRoom:;
- (void)setApi:;
@end
