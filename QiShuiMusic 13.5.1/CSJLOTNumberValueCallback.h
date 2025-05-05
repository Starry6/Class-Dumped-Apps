@interface CSJLOTNumberValueCallback : NSObject
@property (nonatomic) double numberValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)floatValueForFrame:startKeyframe:endKeyframe:interpolatedProgress:startValue:endValue:currentValue:;
- (double)numberValue;
- (void)setNumberValue:;
+ (id)withFloatValue:;
@end
