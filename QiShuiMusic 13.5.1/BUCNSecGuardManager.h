@interface BUCNSecGuardManager : NSObject
@property (nonatomic) NSString device_id;
@property (nonatomic) NSString dc;
@property (nonatomic) @ managerInstance;
- (id)initWithSDKID:SubAppID:License:;
- (id)managerInstance;
- (id)bodyEncry:;
- (id)doHttpReqSignByUrl:body:;
- (id)getMsDidToken;
- (void)reportForScene;
- (void)sendWithDeviceID:;
- (void)setDc:;
- (void)setManagerInstance:;
- (void)setupWithDC:appId:validMotionSensor:;
- (id)initWithConfig:;
- (id)device_id;
- (void).cxx_destruct;
- (void)setDevice_id:;
- (id)dc;
+ (id)sharedInstance;
@end
