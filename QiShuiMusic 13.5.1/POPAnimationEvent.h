@interface POPAnimationEvent : NSObject
@property (nonatomic) NSString animationDescription;
@property (nonatomic) Q type;
@property (nonatomic) double time;
- (void)_appendDescription:;
- (id)animationDescription;
- (id)initWithType:time:;
- (void)setAnimationDescription:;
- (double)time;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)description;
@end
