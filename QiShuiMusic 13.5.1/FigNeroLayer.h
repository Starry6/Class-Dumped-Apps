@interface FigNeroLayer : CALayer
@property (nonatomic) <FigNeroLayerDelegate> neroDelegate;
- (id)init;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)setBounds:;
- (void)_start;
- (id)neroDelegate;
- (void)setNeroDelegate:;
- (void)_dispatchNotification:value:;
@end
