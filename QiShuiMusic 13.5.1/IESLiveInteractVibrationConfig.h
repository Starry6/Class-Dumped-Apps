@interface IESLiveInteractVibrationConfig : NSObject
@property (nonatomic) q type;
@property (nonatomic) Q count;
@property (nonatomic) double interval;
- (id)initWithShakeSettingDict:;
- (void)setCount:;
- (id)init;
- (void)setType:;
- (long long)type;
- (void)setInterval:;
- (unsigned long long)count;
- (double)interval;
@end
