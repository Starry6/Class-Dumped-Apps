@interface MCTimerContext : NSObject
@property (nonatomic) BOOL enabled;
- (void)disable;
- (id)init;
- (BOOL)enabled;
- (void)setEnabled:;
@end
