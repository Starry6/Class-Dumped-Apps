@interface GEOConfigClearExpiredKeyRequest : GEOXPCRequest
@property (nonatomic) NSString keyString;
@property (nonatomic) Q keyOptions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setKeyString:;
- (unsigned long long)keyOptions;
- (void)setKeyOptions:;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)encodeToXPCDictionary:;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (id)keyString;
- (BOOL)isValid;
- (void).cxx_destruct;
+ (Class)replyClass;
@end
