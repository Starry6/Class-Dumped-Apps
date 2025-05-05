@interface SSVSubscriptionResponse : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)subscriptionStatusForAccountUniqueIdentifier:;
- (void)setSubscriptionStatus:forAccountUniqueIdentifier:;
@end
