@interface AWESECInterests : NSObject
@property (nonatomic) AWESECPageInterest pageInterest;
@property (nonatomic) AWESECRouteInterest routeInterest;
- (id)pageInterest;
- (void)setPageInterest:;
- (id)routeInterest;
- (void)setRouteInterest:;
- (void)setup;
- (void).cxx_destruct;
+ (void)setup;
+ (id)shared;
@end
