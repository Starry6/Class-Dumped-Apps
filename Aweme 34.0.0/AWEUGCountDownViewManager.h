@interface AWEUGCountDownViewManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackLogWithKey:message:;
+ (id)currentFeedContainerViewController;
+ (BOOL)showOnCurrentContainerForView:;
+ (id)createNewCountDownViewWithConfig:;
+ (BOOL)isSameContainerForCountDownView:;
+ (void)removeFromSuperViewIfNeededForCountDownView:;
+ (BOOL)showOnCurrentFeedDetailPageForView:;
+ (BOOL)showOnFeedContainer:;
+ (BOOL)showOnTopContainerForForView:;
+ (BOOL)showOnBaseView:countDownView:;
@end
