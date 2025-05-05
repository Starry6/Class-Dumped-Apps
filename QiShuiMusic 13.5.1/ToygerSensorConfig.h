@interface ToygerSensorConfig : NSObject
@property (nonatomic) float static_threshold;
@property (nonatomic) float rotation_threshold;
@property (nonatomic) float offset;
- (float)rotation_threshold;
- (void)setRotation_threshold:;
- (void)setStatic_threshold:;
- (float)static_threshold;
- (void)setOffset:;
- (id)init;
- (float)offset;
@end
