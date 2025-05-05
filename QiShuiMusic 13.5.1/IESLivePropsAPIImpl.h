@interface IESLivePropsAPIImpl : HTSLiveApi
@property (nonatomic) <IESLiveMonitor> monitor;
@property (nonatomic) <IESLiveRoomServiceAdapter> roomModel;
@property (nonatomic) NSNumber lastServerTime;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchAssetInRoomWithToUser:sendScene:completion:;
- (id)lastServerTime;
- (id)roomModel;
- (void)send:amount:toUser:sendScene:sendType:completion:;
- (void)sendAssetReportWithTraceID:;
- (void)setLastServerTime:;
- (void)setRoomModel:;
- (void)setTrackContext:;
- (id)trackContext;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
@end
