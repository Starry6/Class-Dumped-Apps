@interface IESECUniversalLoading : NSObject
+ (id)createActionLoadingViewWithLoadingType:isBlack:;
+ (id)createFullLoadingView;
+ (void)dismissCustomActionLoading:;
+ (void)dismissCustomFullLoading:;
+ (void)dismissFullWindowLoading;
+ (id)showActionLoadingOnView:loadingType:isBlack:;
+ (id)showFullLoadingOnView:;
+ (id)showFullWindowLoading;
@end
