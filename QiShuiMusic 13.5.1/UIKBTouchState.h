@interface UIKBTouchState : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) q phase;
@property (nonatomic) UIWindow window;
@property (nonatomic) {CGPoint=dd} locationInWindow;
@property (nonatomic) double pathMajorRadius;
@property (nonatomic) Q pathIndex;
@property (nonatomic) NSUUID touchUUID;
@property (nonatomic) Q tapCount;
- (id)locationInWindow;
- (long long)phase;
- (id)locationInView:;
- (void).cxx_destruct;
- (double)timestamp;
- (id)description;
- (unsigned long long)pathIndex;
- (id)window;
- (unsigned long long)tapCount;
- (id)copyWithZone:;
- (double)pathMajorRadius;
- (id)touchUUID;
+ (id)touchUUIDForTouch:;
+ (id)touchForTouchUUID:;
+ (id)touchesForTouchUUIDs:;
+ (id)touchUUIDsForTouches:;
+ (void)releaseUUIDForTouch:;
+ (id)touchStateForTouch:;
+ (id)touchStateForTouchUUID:withTimestamp:phase:location:pathIndex:inView:;
@end
