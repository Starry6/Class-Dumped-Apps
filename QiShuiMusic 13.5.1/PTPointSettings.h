@interface PTPointSettings : PTSettings
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) {CGPoint=dd} pointValue;
- (void)setX:;
- (void)setY:;
- (double)y;
- (id)drillDownSummary;
- (double)x;
- (void)setPointValue:;
- (id)pointValue;
+ (BOOL)ignoresKey:;
+ (id)settingsControllerModule;
@end
