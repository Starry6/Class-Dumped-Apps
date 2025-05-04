@interface AWEGrouponHalfScreenDismissAnimator : NSObject
@property (nonatomic) double delay;
- (void)dismissWithAttachAnimation:completion:;
- (id)init;
- (void)setDelay:;
- (void)dismiss;
- (double)delay;
@end
