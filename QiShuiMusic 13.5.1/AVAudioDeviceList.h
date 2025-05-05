@interface AVAudioDeviceList : NSObject
@property (nonatomic) @? changeListener;
- (id)inputDevices;
- (id)init;
- (void)dealloc;
- (id)outputDevices;
- (void)setChangeListener:;
- (id)devices;
- (id)changeListener;
+ (id)defaultInputDevice;
+ (id)currentInputDevice;
+ (id)defaultOutputDevice;
+ (BOOL)setInputDevice:;
+ (id)deviceForUID:;
+ (id)deviceForDeviceID:;
@end
