@interface HTSLivePreviewExposeData_EtData : IESLivePBBaseMessage
@property (nonatomic) NSString typeEnterRoom;
@property (nonatomic) NSString typeMobParams;
@property (nonatomic) NSString typeParams;
@property (nonatomic) NSString typeFirstRoomParams;
@property (nonatomic) NSString typeFirstRoomMobParams;
@property (nonatomic) NSString typeFirstShowRoomParams;
@property (nonatomic) NSString typeFirstShowMobParams;
+ (id)descriptor;
@end
