@interface AWEFeedProgressFineAdjustmentManager : NSObject
+ (BOOL)shouldShock;
+ (double)previewEnlargeRatio;
+ (long long)sliderUpDistance;
+ (long long)adjustmentRatio;
+ (BOOL)isVideoDurationSatisfy:;
+ (void)updateAfterEnterHintShowTimes;
+ (double)fineModelPreviewEnlargeRatio;
+ (BOOL)isFineAdjustmentVideoDurationSatisfy:;
+ (id)beforeEnterHint;
+ (id)afterEnterHint;
+ (id)progressFineAdjustmentExp;
+ (long long)fineAdjustmentLimitTime;
+ (long long)afterEnterHintShowTimes;
+ (BOOL)shouldShowAfterEnterHint;
+ (id)sharedInstance;
+ (unsigned long long)triggerMethod;
+ (BOOL)showIcon;
+ (double)longPressTime;
@end
