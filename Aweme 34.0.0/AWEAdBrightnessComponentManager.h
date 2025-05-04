@interface AWEAdBrightnessComponentManager : NSObject
@property (nonatomic) <AWECommerceComponentContext> commerceContext;
- (id)commerceContext;
- (void)setCommerceContext:;
- (void)setModel:;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)willDisplay;
+ (BOOL)canShowComponentWithContext:;
@end
