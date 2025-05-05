@interface IESLivePrefSampleThermalInfo : NSObject
@property (nonatomic) NSString state;
@property (nonatomic) q thermalState;
@property (nonatomic) NSNumber generateTime;
- (id)generateTime;
- (void)setGenerateTime:;
- (void)setState:;
- (id)state;
- (void).cxx_destruct;
- (long long)thermalState;
- (void)setThermalState:;
@end
