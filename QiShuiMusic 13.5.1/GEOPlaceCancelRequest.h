@interface GEOPlaceCancelRequest : GEOXPCRequest
@property (nonatomic) NSUUID requestUUID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRequestUUID:;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)encodeToXPCDictionary:;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (id)requestUUID;
- (BOOL)isValid;
- (void).cxx_destruct;
+ (Class)replyClass;
@end
