@interface AWERecordBeautyGuideBubbleManager : NSObject
+ (BOOL)isEnableStyleItemGuideBubbleShowStatus;
+ (id)styleItemGuideBubbleContent;
+ (double)styleItemGuideBubbleAutoDismissTime;
+ (double)styleItemGuideBubbleDelayInSecondTime;
+ (void)showStyleItemGuideBubbleInParentView:targetView:hiddenCompleteHandler:;
+ (BOOL)isShowStyleItemGuideBubbleStatus;
+ (void)cacheShowStyleItemGuideBubbleStatus;
@end
