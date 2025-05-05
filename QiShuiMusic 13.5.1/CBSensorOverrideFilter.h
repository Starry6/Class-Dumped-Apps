@interface CBSensorOverrideFilter : CBFilter
@property (nonatomic) NSInteger orientation;
- (void)dealloc;
- (int)orientation;
- (id)initWithData:;
- (id)filterEvent:;
- (void)setOrientation:;
@end
