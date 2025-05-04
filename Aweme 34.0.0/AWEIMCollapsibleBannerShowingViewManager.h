@interface AWEIMCollapsibleBannerShowingViewManager : NSObject
@property (nonatomic) NSMutableSet usableViewSet;
@property (nonatomic) NSMutableSet usingViewSet;
- (id)usableViewSet;
- (id)usingViewSet;
- (id)allocBannerView;
- (void)recycleBannerView:;
- (void)setUsableViewSet:;
- (void)setUsingViewSet:;
- (id)init;
- (void).cxx_destruct;
@end
