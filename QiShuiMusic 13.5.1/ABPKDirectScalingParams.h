@interface ABPKDirectScalingParams : NSObject
@property (nonatomic) float heightScale;
@property (nonatomic) float widthScale;
- (float)heightScale;
- (id)initWithInputResolution:andOutputResolution:;
- (float)widthScale;
@end
