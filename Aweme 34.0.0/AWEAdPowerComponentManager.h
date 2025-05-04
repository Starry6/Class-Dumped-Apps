@interface AWEAdPowerComponentManager : NSObject
@property (nonatomic) <AWECommerceComponentContext> commerceContext;
- (void)didDisplay;
- (id)commerceContext;
- (void)setCommerceContext:;
- (void)setModel:;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)canShowComponentWithContext:;
@end
