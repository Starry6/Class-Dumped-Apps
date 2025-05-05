@interface CHHapticDynamicParameter : NSObject
@property (nonatomic) NSString parameterID;
@property (nonatomic) float value;
@property (nonatomic) double relativeTime;
- (id)init;
- (void)setValue:;
- (void).cxx_destruct;
- (float)value;
- (id)initWithParameterID:value:relativeTime:;
- (double)relativeTime;
- (void)setRelativeTime:;
- (id)parameterID;
@end
