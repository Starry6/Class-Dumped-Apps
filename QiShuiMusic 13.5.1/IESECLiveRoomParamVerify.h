@interface IESECLiveRoomParamVerify : NSObject
@property (nonatomic) IESECLiveRoomParams coreParams;
@property (nonatomic) IESECLiveTracker tracker;
- (id)coreParams;
- (id)initWithLiveContext:;
- (void)p_monitorEnterRoomParams;
- (void)p_verifyEnterRoomParams;
- (void)p_verifySchemaFactoryUsage;
- (void)setCoreParams:;
- (void)verifyLiveParams;
- (void)setTracker:;
- (id)tracker;
- (void).cxx_destruct;
+ (void)clearLog;
+ (void)logAfterBuildEcomLiveParams:;
+ (void)logBeforeBuildEcomLiveParams:;
+ (void)logOriginEnterRoomParams:;
@end
