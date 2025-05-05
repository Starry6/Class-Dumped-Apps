@interface BMNowPlayingOutputDevice : NSObject
@property (nonatomic) Q deviceType;
@property (nonatomic) Q deviceSubType;
@property (nonatomic) NSString deviceId;
- (unsigned long long)deviceType;
- (unsigned long long)deviceSubType;
- (id)deviceId;
- (id)proto;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDeviceType:deviceSubType:deviceId:;
- (BOOL)isEqual:;
@end
