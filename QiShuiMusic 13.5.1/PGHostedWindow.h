@interface PGHostedWindow : _UIHostedWindow
@property (nonatomic) PGHostedWindowHostingHandle hostedWindowHostingHandle;
- (void)dealloc;
- (id)hostedWindowHostingHandle;
- (id)initWithFrame:;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)canBecomeFirstResponder;
@end
