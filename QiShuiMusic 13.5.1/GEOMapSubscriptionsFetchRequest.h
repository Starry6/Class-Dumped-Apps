@interface GEOMapSubscriptionsFetchRequest : GEOXPCRequest
@property (nonatomic) NSArray identifiersFilter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)encodeToXPCDictionary:;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)identifiersFilter;
- (void)setIdentifiersFilter:;
+ (Class)replyClass;
@end
