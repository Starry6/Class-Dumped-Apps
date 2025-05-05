@interface GEOMapSubscriptionAddRequest : GEOXPCRequest
@property (nonatomic) NSString identifier;
@property (nonatomic) Q dataTypes;
@property (nonatomic) Q policy;
@property (nonatomic) GEOMapRegion region;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPolicy:;
- (void)setRegion:;
- (unsigned long long)policy;
- (id)region;
- (id)initWithTraits:auditToken:throttleToken:;
- (id)identifier;
- (void)setExpirationDate:;
- (void)encodeToXPCDictionary:;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (id)expirationDate;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (unsigned long long)dataTypes;
- (void)setDataTypes:;
+ (Class)replyClass;
@end
