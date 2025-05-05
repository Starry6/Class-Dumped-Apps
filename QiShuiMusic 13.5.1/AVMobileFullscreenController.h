@interface AVMobileFullscreenController : NSObject
@property (nonatomic) <AVMobileFullscreenControllerDelegate> delegate;
@property (nonatomic) Q presentationState;
- (void)exitFullscreen:;
- (id)initWithPlayerViewController:;
- (void)setDelegate:;
- (void)updatePresentationStateTo:;
- (unsigned long long)presentationState;
- (void)enterFullscreen:;
- (id)delegate;
- (void).cxx_destruct;
@end
