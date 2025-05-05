@interface GEOETARequestSimple : GEOXPCRequest
@property (nonatomic) GEOETARequest request;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)encodeToXPCDictionary:;
- (id)request;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setRequest:;
+ (Class)replyClass;
@end
