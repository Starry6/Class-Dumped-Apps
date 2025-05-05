@interface PTFakeMetaTouch : NSObject
+ (long long)fakeTouchId:AtPoint:withTouchPhase:;
+ (id)eventWithTouches:;
+ (long long)getAvailablePointId;
@end
