@interface AWEPOICouponGuideHelper : NSObject
+ (BOOL)shouldShowUnusedCounponsBubble;
+ (BOOL)shouldShowCouponGuideInSideBar;
+ (void)handleBubbleDisplayed;
+ (void)handleReceiveCoupon;
+ (void)handleEnterCouponPage;
+ (BOOL)hasUnreadCouponStatusChanged;
+ (void)handleMerchantEntryTapped;
+ (BOOL)shouldDisableDisplayHeadImageUploadTip;
+ (void)disableDisplayHeadImageUploadTip;
@end
