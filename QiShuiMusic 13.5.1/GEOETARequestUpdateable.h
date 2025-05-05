@interface GEOETARequestUpdateable : GEOXPCRequest
@property (nonatomic) GEOETATrafficUpdateRequest request;
@property (nonatomic) GEODataConditionalConnectionProperties connectionProperties;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)connectionProperties;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)encodeToXPCDictionary:;
- (id)request;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setRequest:;
- (void)setConnectionProperties:;
+ (Class)replyClass;
@end
