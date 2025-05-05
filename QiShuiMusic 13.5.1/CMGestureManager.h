@interface CMGestureManager : NSObject
@property (nonatomic) @? gestureHandler;
- (id)initWithPriority:;
- (id)init;
- (void)dealloc;
- (void)setGestureHandler:;
- (id)gestureHandler;
+ (void)setGestureServiceEnabled:;
+ (BOOL)isGestureServiceAvailable;
+ (BOOL)isGestureServiceEnabled;
@end
