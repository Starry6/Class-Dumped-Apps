@interface AWEVideoCoverChooseMonitor : NSObject
+ (void)markStartVideoCoverChoosePageLoad;
+ (void)trackVideoCoverChoosePageLoad;
+ (void)trackAIReframeCompleteWithStartTime:error:;
@end
