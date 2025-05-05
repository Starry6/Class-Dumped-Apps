@interface AXMActiveSoundOutputActionHandle : AXMOutputActionHandle
@property (nonatomic) <AXMActiveSoundOutputActionHandleProvider> handleProvider;
@property (nonatomic) float pitch;
@property (nonatomic) float rate;
- (void)setRate:;
- (void)setPitch:;
- (float)rate;
- (float)pitch;
- (void)stop;
- (void).cxx_destruct;
- (void)setQuantizedRate:;
- (id)handleProvider;
- (void)setHandleProvider:;
@end
