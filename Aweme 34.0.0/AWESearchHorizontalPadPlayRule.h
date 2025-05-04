@interface AWESearchHorizontalPadPlayRule : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} activeRect;
@property (nonatomic) UIView<AWESearchAutoPlayCardProtocol> currentActiveViewInWaterFallLayout;
@property (nonatomic) BOOL needCheckPlayIndex;
@property (nonatomic) AWESearchAutoPlayHandler handler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getAutoPlayViewFromViews:inContainer:contentOffset:directionPoint:speedPoint:;
- (BOOL)needCheckPlayIndex;
- (void)setNeedCheckPlayIndex:;
- (id)currentActiveViewInWaterFallLayout;
- (void)setCurrentActiveViewInWaterFallLayout:;
- (void).cxx_destruct;
- (id)activeRect;
- (void)setActiveRect:;
- (unsigned long long)ruleType;
@end
