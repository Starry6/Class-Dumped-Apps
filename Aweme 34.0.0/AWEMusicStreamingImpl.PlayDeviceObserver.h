@interface AWEMusicStreamingImpl.PlayDeviceObserver : NSObject
@property (nonatomic) BOOL isBuiltInDevice;
@property (nonatomic) NSString playDeviceName;
@property (nonatomic) NSString outputDeviceType;
- (void)setIsBuiltInDevice:;
- (id)playDeviceName;
- (void)receiveNoticWithNotification:;
- (id)init;
- (id)outputDeviceType;
- (void).cxx_destruct;
- (BOOL)isBuiltInDevice;
+ (id)shared;
@end
