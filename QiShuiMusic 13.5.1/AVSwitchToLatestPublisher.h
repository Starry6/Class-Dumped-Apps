@interface AVSwitchToLatestPublisher : AVPublisher
- (void)dealloc;
- (id)subscribeRequestingInitialValue:block:;
- (id)initWithUpstream:;
- (id)description;
+ (id)switchToLatestPublisherWithUpstream:;
@end
