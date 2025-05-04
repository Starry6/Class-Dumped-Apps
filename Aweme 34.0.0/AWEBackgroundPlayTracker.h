@interface AWEBackgroundPlayTracker : NSObject
+ (void)trackParamsForEvent:params:model:;
+ (id)backgroundPlayType;
+ (BOOL)enableBGPlayComponent;
@end
