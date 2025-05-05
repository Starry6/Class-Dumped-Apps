@interface IESECUILoading : NSObject
+ (id)createLoadingView;
+ (void)dismissFullScreenLoading;
+ (void)dismissWindowLoading;
+ (Class)serviceImpl;
+ (id)showFullScreenLoading;
+ (id)showFullScreenLoadingOnView:;
+ (id)showLoadingOnView:;
+ (id)showWindowLoading;
+ (id)showWindowLoadingWithTitle:;
@end
