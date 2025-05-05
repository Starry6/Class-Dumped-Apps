@interface AVCustomRoutingEvent : NSObject
@property (nonatomic) q reason;
@property (nonatomic) AVCustomDeviceRoute route;
@property (nonatomic) BOOL succeeded;
- (void)setRoute:;
- (id)route;
- (long long)reason;
- (BOOL)succeeded;
- (void)setReason:;
- (void).cxx_destruct;
- (id)description;
- (void)setSucceeded:;
@end
