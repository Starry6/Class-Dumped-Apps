@interface BMBookmarkableSubscription : BPSSubscription
- (void)cancel;
- (id)newBookmark;
- (void)requestDemand:;
- (id)upstreamSubscriptions;
@end
