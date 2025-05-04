@interface AWEHPMainThreadChecker : NSObject
+ (BOOL)isCheckEnabled;
+ (BOOL)shouldTrackWithCustomEnableTrack:fileName:funcName:;
+ (BOOL)shouldContainStackWithFileName:funcName:;
+ (int)stackInfoStartIndex;
+ (int)stackInfoDepth;
+ (id)trackBlackSet;
+ (BOOL)isContainStackInfoEnabled;
+ (id)containStackInfoWhiteSet;
+ (id)mainThreadCheckConfig;
+ (void)checkWithFileName:funcName:enableAssert:enableTrack:;
+ (BOOL)isTrackEnabled;
@end
