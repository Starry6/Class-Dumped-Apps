@interface LOTColorValueCallback : NSObject
@property (nonatomic) ^{CGColor=} colorValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)colorForFrame:startKeyframe:endKeyframe:interpolatedProgress:startColor:endColor:currentColor:;
- (id)colorValue;
- (void)setColorValue:;
+ (id)withCGColor:;
@end
