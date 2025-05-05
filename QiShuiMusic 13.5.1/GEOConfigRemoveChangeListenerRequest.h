@interface GEOConfigRemoveChangeListenerRequest : GEOXPCRequest
@property (nonatomic) NSArray keys;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)keys;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)encodeToXPCDictionary:;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (void)setKeys:;
- (BOOL)isValid;
- (void).cxx_destruct;
+ (Class)replyClass;
@end
