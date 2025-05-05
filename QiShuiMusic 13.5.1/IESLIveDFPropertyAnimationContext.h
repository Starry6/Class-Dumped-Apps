@interface IESLIveDFPropertyAnimationContext : IESLiveDFAnimationContext
@property (nonatomic) @ fromValue;
@property (nonatomic) @ toValue;
@property (nonatomic) q repeatCount;
@property (nonatomic) CAMediaTimingFunction timingFunction;
@property (nonatomic) IESLiveDFBezierPath bezierPath;
@property (nonatomic) BOOL isReverse;
- (BOOL)isReverse;
- (void)setIsReverse:;
- (long long)repeatCount;
- (void)setRepeatCount:;
- (void)setTimingFunction:;
- (id)timingFunction;
- (void).cxx_destruct;
- (id)fromValue;
- (void)setFromValue:;
- (id)toValue;
- (void)setToValue:;
- (id)bezierPath;
- (void)setBezierPath:;
@end
