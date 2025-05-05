@interface AXMHapticOutputAction : AXMOutputAction
@property (nonatomic) NSURL hapticFileURL;
@property (nonatomic) double hapticIntensity;
- (id)initWithURL:;
- (void).cxx_destruct;
- (double)hapticIntensity;
- (void)setHapticIntensity:;
- (id)_initWithURL:handle:;
- (id)hapticFileURL;
@end
