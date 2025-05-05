@interface BPSEmpty : BMBookmarkableSubscription
- (void)cancel;
- (void)requestDemand:;
- (id)upstreamSubscriptions;
@end
