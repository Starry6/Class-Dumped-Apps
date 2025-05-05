@interface CSJLOTNumberBlockCallback : NSObject
@property (nonatomic) @? callback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)floatValueForFrame:startKeyframe:endKeyframe:interpolatedProgress:startValue:endValue:currentValue:;
- (id)callback;
- (void)setCallback:;
- (void).cxx_destruct;
+ (id)withBlock:;
@end
