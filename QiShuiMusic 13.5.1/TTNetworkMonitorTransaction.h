@interface TTNetworkMonitorTransaction : NSObject
@property (nonatomic) q status;
- (void)setStatus:;
- (long long)status;
+ (long long)statusCodeForNSUnderlyingError:;
@end
