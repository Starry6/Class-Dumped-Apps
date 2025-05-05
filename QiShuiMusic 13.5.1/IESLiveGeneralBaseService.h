@interface IESLiveGeneralBaseService : NSObject
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
@property (nonatomic) IESLiveGuideModel guideModel;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) IESLiveComponentContext componentContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentContext;
- (id)guideModel;
- (void)serviceDidLaunch;
- (void)serviceRoomDataReady:;
- (void)serviceUninstall;
- (void)serviceWillLaunchWithParam:;
- (void)setComponentContext:;
- (void)setGuideModel:;
- (void)setTrackContext:;
- (id)trackContext;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
+ (id)serviceActionsWithParam:;
+ (unsigned long long)serviceImmediateLoadTypes;
+ (id)serviceProtocolsWithParam:;
+ (BOOL)serviceShouldActive:;
@end
