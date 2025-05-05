@interface MLSupportVectorRegressor : MLRegressor
@property (nonatomic) MLSVREngine engine;
- (id)engine;
- (id)regress:options:error:;
- (void)setEngine:;
- (id)initWithEngine:description:configuration:error:;
- (void).cxx_destruct;
@end
