@interface IESLiveCurrentMatchInfoUtil : NSObject
@property (nonatomic) NSDictionary lastVaildMatchInfo;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) <IESLiveRoomServiceAdapter> mixedRoom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)notifyMatchInfo;
- (id)currentMatchInfo;
- (void)didSetAttachingDIContext;
- (BOOL)hasValidMatchIdAndEvenids;
- (id)lastVaildMatchInfo;
- (id)mixedRoom;
- (void)onCameraDidChangeTo:source:;
- (void)p_changeCurrentMatchInfoWithIsContentIDChange:;
- (void)rebuildEventParams;
- (void)setLastVaildMatchInfo:;
- (void)setMixedRoom:;
- (void)setTrackContext:;
- (void)setupWithRoom:;
- (id)trackContext;
- (void)trackMatchContentPlay;
- (void).cxx_destruct;
- (void)messageReceived:;
+ (id)p_getCurrentMatchInfo;
@end
