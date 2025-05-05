@interface GEOPlaceCachePlaceRequest : GEOXPCRequest
@property (nonatomic) GEOPDPlace place;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)encodeToXPCDictionary:;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (id)place;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setPlace:;
+ (Class)replyClass;
@end
