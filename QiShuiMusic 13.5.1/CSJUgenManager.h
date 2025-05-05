@interface CSJUgenManager : NSObject
@property (nonatomic) CSJUgenImageHandler imageHandler;
@property (nonatomic) CSJUgenLottieHandler lottieHandler;
@property (nonatomic) CSJUgenMotionHandler motionHandler;
- (void)globalInit;
- (id)lottieHandler;
- (void)setLottieHandler:;
- (id)motionHandler;
- (void).cxx_destruct;
- (void)setMotionHandler:;
- (id)imageHandler;
- (void)setImageHandler:;
+ (id)sharedInstance;
@end
