@interface UIViewSpringAnimationDescription : NSObject
@property (nonatomic) BOOL usesDampingRatioAndResponse;
@property (nonatomic) double tension;
@property (nonatomic) double friction;
@property (nonatomic) {?=ddBBddddddd} parameters;
- (double)tension;
- (double)friction;
- (void)setTension:;
- (BOOL)usesDampingRatioAndResponse;
- (id)parameters;
- (void)setUsesDampingRatioAndResponse:;
- (void)setParameters:;
- (void)setFriction:;
+ (id)descriptionWithTension:friction:;
+ (id)descriptionWithSpringAnimationParameters:;
@end
