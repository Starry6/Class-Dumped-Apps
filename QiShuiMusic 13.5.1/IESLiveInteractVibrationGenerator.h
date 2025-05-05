@interface IESLiveInteractVibrationGenerator : NSObject
@property (nonatomic) IESLiveGCDTimer timer;
- (long long)getFeedBackStyleWithVibrationType:;
- (unsigned int)getSystemVibrationIdWithVibrationType:;
- (void)triggerVibrationWithConfig:;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
@end
