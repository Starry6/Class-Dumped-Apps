@interface UgenBehaviorBundle : NSObject
@property (nonatomic) NSArray behaviors;
@property (nonatomic) NSArray widgets;
@property (nonatomic) UgenImageHandler imageHandler;
@property (nonatomic) UgenLottieHandler lottieHandler;
@property (nonatomic) UgenMotionHandler motionHandler;
- (id)lottieHandler;
- (id)motionHandler;
- (id)behaviors;
- (void).cxx_destruct;
- (id)widgets;
- (id)imageHandler;
- (id)initWithBehaviors:;
@end
