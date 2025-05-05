@interface MDARController : NSObject
@property (nonatomic) <MDARControllerDelegate> delegate;
@property (nonatomic) ARSession session;
@property (nonatomic) Q sessionInterruptedReason;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)run:;
- (id)init;
- (void)dealloc;
- (void)sessionWasInterrupted:;
- (void)setDelegate:;
- (void)sessionInterruptionEnded:;
- (void)session:didFailWithError:;
- (id)delegate;
- (id)session;
- (void).cxx_destruct;
- (void)pause;
- (void)_avCaptureSessionWasInterrupted:;
- (void)session:cameraDidChangeTrackingState:;
- (unsigned long long)sessionInterruptedReason;
+ (BOOL)isSupported;
+ (unsigned long long)vkARTrackingStateReasonFromARTrackingStateReason:;
+ (unsigned long long)vkARTrackingStateFromARTrackingState:;
@end
