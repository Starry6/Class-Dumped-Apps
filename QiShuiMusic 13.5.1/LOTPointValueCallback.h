@interface LOTPointValueCallback : NSObject
@property (nonatomic) {CGPoint=dd} pointValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pointForFrame:startKeyframe:endKeyframe:interpolatedProgress:startPoint:endPoint:currentPoint:;
- (void)setPointValue:;
- (id)pointValue;
+ (id)withPointValue:;
@end
