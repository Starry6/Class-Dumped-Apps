@interface IESECNotice : NSObject
+ (void)enterGoodsDetailViewWithParams:;
+ (void)enterHalfScreenMode;
+ (void)enterNormalScreenMode;
+ (void)pauseLiveScreenShotObserver;
+ (void)postLiveUserHasPurchaseIntentionNotice;
+ (void)quitGoodsDetailViewWithParams:;
+ (void)resumeLiveScreenShotObserver;
+ (void)setEnableFullScreenMode:;
@end
