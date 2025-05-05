@interface GEOPlaceRequestMessage : GEOXPCRequest
@property (nonatomic) NSUUID requestUUID;
@property (nonatomic) GEOPDPlaceRequest request;
@property (nonatomic) Q cachePolicy;
@property (nonatomic) double timeout;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCachePolicy:;
- (unsigned long long)cachePolicy;
- (void)setRequestUUID:;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)setTimeout:;
- (void)encodeToXPCDictionary:;
- (id)request;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (id)requestUUID;
- (BOOL)isValid;
- (void).cxx_destruct;
- (double)timeout;
- (void)setRequest:;
+ (Class)replyClass;
@end
