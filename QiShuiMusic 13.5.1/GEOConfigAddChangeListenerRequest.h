@interface GEOConfigAddChangeListenerRequest : GEOXPCRequest
@property (nonatomic) NSDictionary keysAndSources;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setKeysAndSources:;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)encodeToXPCDictionary:;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (id)keysAndSources;
- (BOOL)isValid;
- (void).cxx_destruct;
+ (Class)replyClass;
@end
