@interface IESLiveEnterRoomBizViewOnScreenServiceImpl : IESLiveGeneralBaseService
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
@property (nonatomic) double enterRoomStartTime;
@property (nonatomic) NSMutableDictionary bizViewFirstScreenCostDic;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bizViewDidOnScreenFirstTime:;
- (id)bizViewFirstScreenCostDic;
- (double)enterRoomStartTime;
- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)setBizViewFirstScreenCostDic:;
- (void)setEnterRoomStartTime:;
- (void).cxx_destruct;
+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceProtocolsWithParam:;
+ (BOOL)serviceShouldActive:;
@end
