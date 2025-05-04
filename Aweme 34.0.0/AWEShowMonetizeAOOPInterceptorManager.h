@interface AWEShowMonetizeAOOPInterceptorManager : NSObject
@property (nonatomic) NSMutableArray interceptors;
@property (nonatomic) UIViewController<AWEPlayInteractionBaseViewControllerProtocol><AWEPlayInteractionViewControllerProtocol> container;
- (void)addInterceptor:;
- (id)interceptors;
- (void)setInterceptors:;
- (void)removeInterceptor:;
- (id)shouldIntercept;
- (void)removeInterceptorForType:;
- (void)removeAllInterceptor;
- (id)initWithContainer:;
- (void)setContainer:;
- (id)container;
- (void).cxx_destruct;
@end
