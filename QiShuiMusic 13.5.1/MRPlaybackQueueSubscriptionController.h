@interface MRPlaybackQueueSubscriptionController : NSObject
@property (nonatomic) MRPlayerPath playerPath;
- (id)contentItemIdentifierForOffset:;
- (void)removeRequest:;
- (id)initWithPlayerPath:;
- (void)addRequest:;
- (id)initWithCoder:;
- (id)requestForSubscribedContentItemIdentifier:;
- (void)encodeWithCoder:;
- (id)filteredContentItemsBySubscriptionsForContentItems:;
- (void).cxx_destruct;
- (id)offsetForIdentifier:;
- (void)subscribeToPlaybackQueue:forRequest:;
- (id)description;
- (id)playerPath;
- (void)augmentCommandOptions:forCommand:;
- (BOOL)hasRequest:;
- (void)invalidate;
- (void)restoreStateFromController:;
- (void)enumerateFilteredContentItemsBySubscriptionsForContentItems:block:;
+ (BOOL)supportsSecureCoding;
@end
