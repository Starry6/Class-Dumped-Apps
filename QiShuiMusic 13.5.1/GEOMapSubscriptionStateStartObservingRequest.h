@interface GEOMapSubscriptionStateStartObservingRequest : GEOXPCRequest
@property (nonatomic) NSArray identifiers;
@property (nonatomic) BOOL sendInitialUpdate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)identifiers;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)encodeToXPCDictionary:;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (void)setIdentifiers:;
- (void).cxx_destruct;
- (BOOL)sendInitialUpdate;
- (void)setSendInitialUpdate:;
+ (Class)replyClass;
@end
