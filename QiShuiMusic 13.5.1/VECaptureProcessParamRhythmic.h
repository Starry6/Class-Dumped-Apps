@interface VECaptureProcessParamRhythmic : VECaptureProcessParam
@property (nonatomic) NSArray crop_list;
@property (nonatomic) float alpha_max;
@property (nonatomic) float velocity_max;
- (float)alpha_max;
- (id)crop_list;
- (void)setAlpha_max:;
- (void)setCrop_list:;
- (void)setVelocity_max:;
- (float)velocity_max;
- (void).cxx_destruct;
@end
