@interface GEOMapSubscriptionAddReply : GEOXPCReply
@property (nonatomic) GEOMapDataSubscription subscription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)subscription;
- (void)setSubscription:;
- (void)encodeToXPCDictionary:;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (void).cxx_destruct;
@end
