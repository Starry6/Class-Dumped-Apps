@interface IESLiveNewDressContext : NSObject
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
@property (nonatomic) IESLiveComponentContext componentContext;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) HTSLiveUser user;
- (id)componentContext;
- (id)createLogExtraInfo;
- (void)setComponentContext:;
- (void)setTrackContext:;
- (id)trackContext;
- (void)setUser:;
- (id)user;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
@end
