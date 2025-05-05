@interface SSVFairPlaySubscriptionStatus : NSObject
@property (nonatomic) BOOL hasSubscriptionLease;
@property (nonatomic) BOOL hasSubscriptionSlot;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (BOOL)hasSubscriptionLease;
- (void)setHasSubscriptionLease:;
- (BOOL)hasSubscriptionSlot;
- (void)setHasSubscriptionSlot:;
@end
