@interface BDASplashMotionManager : NSObject
@property (nonatomic) CMMotionManager manager;
@property (nonatomic) q detectOptions;
@property (nonatomic) <BDASplashMotionDelegate> delegate;
- (long long)detectOptions;
- (void)setDetectOptions:;
- (void)startDetectMotionWithType:delegate:;
- (void)stopDetectMotionWithType:;
- (id)init;
- (void)setDelegate:;
- (id)manager;
- (void)setManager:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
