@interface AWELivePreStreamEcomElement : AWELiveBusinessBaseElement
@property (nonatomic) IESLiveRoomMQEventReportApi reportApi;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (void)roomInfoBySceneReceive:;
- (void)preloadElement;
- (void)onMessageReceivce:withDict:;
- (id)reportApi;
- (void)setReportApi:;
- (id)provideCoreDataForEvent:;
- (void)setData:;
- (void).cxx_destruct;
- (void)reset;
@end
