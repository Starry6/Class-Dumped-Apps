@interface BPSSubscriptionStatus : NSObject
@property (nonatomic) q state;
@property (nonatomic) BPSSubscription subscription;
- (id)subscription;
- (void)setSubscription:;
- (void)setState:;
- (long long)state;
- (void).cxx_destruct;
- (id)initWithState:subscription:;
+ (id)subscribedWithSubscription:;
+ (id)awaitingSubscription;
+ (id)terminal;
@end
