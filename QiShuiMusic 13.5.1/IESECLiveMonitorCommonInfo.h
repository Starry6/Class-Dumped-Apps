@interface IESECLiveMonitorCommonInfo : NSObject
@property (nonatomic) IESECLiveRoomParams roomParams;
@property (nonatomic) NSMutableDictionary basicInfo;
@property (nonatomic) BOOL openWithSaaS;
- (id)p_currentUserID;
- (id)basicInfo;
- (id)basicMonitorInfo;
- (id)initWithRoomParams:;
- (BOOL)openWithSaaS;
- (void)p_generateBasicInfo;
- (BOOL)p_isAudience;
- (id)roomParams;
- (void)setBasicInfo:;
- (void)setOpenWithSaaS:;
- (void)setRoomParams:;
- (void).cxx_destruct;
@end
