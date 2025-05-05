@interface MSTimerGate : NSObject
@property (nonatomic) BOOL enabled;
- (void)disable;
- (void)enable;
- (id)init;
- (BOOL)enabled;
- (void)setEnabled:;
@end
