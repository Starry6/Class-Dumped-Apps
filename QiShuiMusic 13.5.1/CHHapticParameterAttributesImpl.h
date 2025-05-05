@interface CHHapticParameterAttributesImpl : NSObject
@property (nonatomic) float minValue;
@property (nonatomic) float maxValue;
@property (nonatomic) float defaultValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (float)defaultValue;
- (float)maxValue;
- (float)minValue;
- (id)initWithMinValue:maxValue:defaultValue:;
@end
