@interface CIDualRedEyeRepairTuning : NSObject
@property (nonatomic) NSDictionary repairTuning;
@property (nonatomic) NSDictionary sessionTuning;
- (void)dealloc;
- (id)initWithTuning:;
- (unsigned long long)tuningFromCameraModel:portType:;
- (void)setTuningParametersByPortType:withCameraMetadata:;
- (void)updateWithCaptureSetup:portType:;
- (id)repairTuning;
- (void)setRepairTuning:;
- (id)sessionTuning;
- (void)setSessionTuning:;
+ (id)defaultSessionParameters;
+ (id)defaultRepairParameters;
+ (id)repairParametersForTuning:;
+ (id)sessionParametersForTuning:;
@end
