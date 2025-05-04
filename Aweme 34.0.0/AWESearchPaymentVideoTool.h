@interface AWESearchPaymentVideoTool : NSObject
+ (BOOL)hitPaymentVideoPreviewAB;
+ (BOOL)isIAPPaymentVideo:;
+ (long long)paymentVideoPreviewABValue;
+ (BOOL)overPreviewTimeForAweme:currentTime:buffer:;
+ (BOOL)isRewardAdvertiseVideo:;
+ (BOOL)isRewardVideoSupportPreview:;
+ (BOOL)hasUnlockedForRewardVideo:;
+ (BOOL)hitPaymentVideoPreviewOnline;
+ (BOOL)isPaymentVideoPreviewBlockStyle;
+ (BOOL)overPreviewTimeForAweme:currentTime:;
+ (BOOL)isRewardVideoNeedBlockPlay:;
+ (BOOL)overPreviewTimeForRewardVideo:currentTime:;
@end
