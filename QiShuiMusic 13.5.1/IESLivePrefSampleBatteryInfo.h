@interface IESLivePrefSampleBatteryInfo : NSObject
@property (nonatomic) NSNumber low_power_mode;
@property (nonatomic) NSNumber state;
@property (nonatomic) NSNumber level;
@property (nonatomic) NSNumber generateTime;
- (id)generateTime;
- (id)low_power_mode;
- (void)setGenerateTime:;
- (void)setLow_power_mode:;
- (void)setLevel:;
- (id)level;
- (void)setState:;
- (id)state;
- (void).cxx_destruct;
@end
