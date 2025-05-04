@interface AWEIMAirPlaneTabbarGestureHandler : NSObject
@property (nonatomic) BOOL isIMReady;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldInterceptDoubleClickWithCurrentTabID:targetTabID:;
- (BOOL)shouldInterceptLongPressWithCurrentTabID:targetTabID:;
- (BOOL)shouldInterceptSingleClickWithCurrentTabID:targetTabID:;
- (void)tabBarDidChangeSelectedTabWithCurrentSelectedTabID:previousSelectedTabID:;
- (BOOL)isPluginEffect;
- (id)shouldInterceptTabCurrentReferStringWithTabID:;
- (void)__recordIMReady;
- (BOOL)__enableResponse;
- (BOOL)isIMReady;
- (void)setIsIMReady:;
- (id)init;
@end
