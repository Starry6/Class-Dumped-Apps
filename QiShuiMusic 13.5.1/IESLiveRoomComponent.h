@interface IESLiveRoomComponent : IESLiveComponentBase
@property (nonatomic) @ room;
@property (nonatomic) <IESLiveRoomServiceAdapter> mixedRoom;
@property (nonatomic) IESLiveComponentContext componentContext;
@property (nonatomic) HTSEventContext trackContext;
- (id)componentContext;
- (void)componentWillMount;
- (void)componentWillUnmount;
- (id)mixedRoom;
- (void)remoteRoomDataReady:;
- (void)setComponentContext:;
- (void)setMixedRoom:;
- (void)setTrackContext:;
- (id)trackContext;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
+ (BOOL)isMixed;
+ (BOOL)componentShouldActive:;
+ (id)componentWithRoom:trackContext:componentContext:;
+ (id)createAttacherWithRoom:componentContext:trackContext:;
@end
