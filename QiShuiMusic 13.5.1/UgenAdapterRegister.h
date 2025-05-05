@interface UgenAdapterRegister : NSObject
@property (nonatomic) NSMutableDictionary behaviorMap;
- (void)setBehaviorMap:;
- (id)behaviorMap;
- (id)createImageHandler;
- (id)createLottieHandler;
- (id)createMotionHandler;
- (id)init;
- (void)addBehavior:;
- (void).cxx_destruct;
@end
