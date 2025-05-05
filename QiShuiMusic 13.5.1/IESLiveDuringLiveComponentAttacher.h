@interface IESLiveDuringLiveComponentAttacher : NSObject
@property (nonatomic) @ room;
@property (nonatomic) IESLiveComponentContext componentContext;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) <IESLiveRoomServiceAdapter> mixedRoom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentContext;
- (id)initWithRoom:componentContext:trackContext:;
- (id)mixedRoom;
- (void)setComponentContext:;
- (void)setMixedRoom:;
- (void)setTrackContext:;
- (id)trackContext;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
+ (id)attacherForRoom:componentContext:trackContext:;
@end
