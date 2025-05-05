@interface GEOMapSubscriptionStateReply : GEOXPCReply
@property (nonatomic) GEOMapDataSubscriptionState state;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setState:;
- (void)encodeToXPCDictionary:;
- (id)initWithXPCDictionary:error:;
- (id)state;
- (BOOL)isValid;
- (void).cxx_destruct;
@end
