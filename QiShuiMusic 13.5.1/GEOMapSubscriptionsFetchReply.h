@interface GEOMapSubscriptionsFetchReply : GEOXPCReply
@property (nonatomic) NSArray subscriptions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSubscriptions:;
- (id)subscriptions;
- (void)encodeToXPCDictionary:;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (void).cxx_destruct;
@end
