@interface AWEOuterTestManager : NSObject
+ (BOOL)shouldShowYellowDot;
+ (BOOL)canAccessOuterTest;
+ (void)jumpToOuterTest;
+ (void)clearCurrentRemind;
+ (BOOL)installDurationEnough;
+ (BOOL)validlastRequestTime;
+ (void)popOuterTestIfNeeded;
+ (BOOL)enableOuterTest;
+ (BOOL)isOuterTester;
+ (id)outerTestSchema;
+ (void)startUseApp;
+ (id)buildVersion;
@end
