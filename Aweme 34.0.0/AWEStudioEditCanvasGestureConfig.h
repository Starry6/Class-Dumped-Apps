@interface AWEStudioEditCanvasGestureConfig : NSObject
@property (nonatomic) BOOL panEnabled;
@property (nonatomic) BOOL pinchEnabled;
@property (nonatomic) BOOL rotationEnabled;
- (BOOL)pinchEnabled;
- (BOOL)isGestureRecognizerSupported:;
- (void)setPinchEnabled:;
- (id)init;
- (void)setRotationEnabled:;
- (BOOL)panEnabled;
- (void)setPanEnabled:;
- (BOOL)rotationEnabled;
- (void)disableAll;
@end
