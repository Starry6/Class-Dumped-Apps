@interface AWEIMComponentGestureProxy : NSObject
- (void)proxyGestureAction:;
+ (id)addGestureWithType:onView:uniqueID:;
+ (id)makeGestureWithType:;
+ (void)bindView:withAction:uniqueID:;
+ (id)keyForActionWithUniqueID:;
+ (id)addTapGestureOnView:;
+ (void)bindView:withAction:;
+ (id)sharedInstance;
@end
