@interface AWESearchAIGCFeatureSettings : NSObject
+ (BOOL)longImagePublishEnabled;
+ (id)feedEntranceSummarySchema;
+ (id)feedEntranceRSSchema;
+ (BOOL)keyboardInputModifyEnabled;
+ (id)deepThinkInputBoxConfig;
+ (unsigned long long)inputVisionSearchType;
+ (BOOL)resultViewControllerV2Enabled;
+ (BOOL)deepThinkIntegratedIntoInputBoxEnabled;
+ (long long)createLongImageHeightLimit;
+ (double)longImageScreenshotTimeoutSec;
+ (id)longImageVideoGenerationConfig;
+ (BOOL)feedEntranceEnabled;
+ (unsigned long long)feedEntranceStyleABType;
+ (id)feedEntranceSummaryAPIPath;
+ (id)feedEntranceRSSAPIPath;
+ (BOOL)voiceBroadcastEnabled;
+ (BOOL)inputSugABTestEnabled;
+ (BOOL)voiceInputModifyEnabled;
@end
