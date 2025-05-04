@interface AWEAwemeBaseVRPlayer : AWEAwemeBaseVideoPlayer
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} beforeEnterPicoVRPageFrame;
- (void)configBeforEnterToPicoVRPage;
- (void)configAfterQuitFromPicoVRPage:;
- (void)setBeforeEnterPicoVRPageFrame:;
- (BOOL)shouldRemoveConstraintAfterExitVRPage;
- (id)beforeEnterPicoVRPageFrame;
+ (long long)defaultMediaTypeInContainer:;
+ (BOOL)shouldHandleModel:inContainer:;
+ (long long)mediaTypeForModel:inContainer:;
+ (id)mediaPlayerForModel:inContainer:;
@end
