@interface AWEPayNFCPayHandler : NSObject
+ (BOOL)handlePayBusiness:;
+ (void)removeLoadingByDelay;
+ (BOOL)canHandlePayBusinessWithBid:;
+ (void)payPageDidShow;
+ (BOOL)handleWithBid:params:;
+ (BOOL)handleSKM:;
+ (BOOL)handleFKM:;
@end
