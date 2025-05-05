@interface ARSessionReplayStats : NSObject
@property (nonatomic) NSInteger recordingFormat;
@property (nonatomic) NSString deviceModel;
@property (nonatomic) NSString osVersion;
@property (nonatomic) NSString arkitVersion;
@property (nonatomic) NSString fileName;
@property (nonatomic) Q recordedSensorTypes;
- (id)deviceModel;
- (id)osVersion;
- (id)fileName;
- (void)setOsVersion:;
- (void).cxx_destruct;
- (void)setFileName:;
- (void)setDeviceModel:;
- (id)arkitVersion;
- (int)recordingFormat;
- (void)setRecordingFormat:;
- (void)setArkitVersion:;
- (unsigned long long)recordedSensorTypes;
- (void)setRecordedSensorTypes:;
@end
