@interface AWESECAppJumpRulerResult : AWESECAppJumpBasicCheckResult
@property (nonatomic) NSError engineError;
@property (nonatomic) NSString strategyHit;
@property (nonatomic) q silentModeDuration;
@property (nonatomic) NSString style;
@property (nonatomic) NSString heading;
@property (nonatomic) NSString body;
@property (nonatomic) NSString leftButton;
@property (nonatomic) NSString rightButton;
- (void)setEngineError:;
- (id)engineError;
- (id)strategyHit;
- (long long)silentModeDuration;
- (void)setStrategyHit:;
- (void)setSilentModeDuration:;
- (void)setLeftButton:;
- (void)setRightButton:;
- (id)init;
- (id)heading;
- (void)setHeading:;
- (id)leftButton;
- (id)rightButton;
- (id)style;
- (id)body;
- (void).cxx_destruct;
- (void)setBody:;
- (void)setStyle:;
@end
