@interface AWESECRouteInterest : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleNativeRoute:;
- (void)handleWebTraceEvent:;
- (void)setup;
- (void)handleEvent:;
- (id)subscriberId;
@end
