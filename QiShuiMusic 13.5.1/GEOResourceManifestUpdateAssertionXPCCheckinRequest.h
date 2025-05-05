@interface GEOResourceManifestUpdateAssertionXPCCheckinRequest : GEOXPCRequest
@property (nonatomic) NSString reason;
@property (nonatomic) double timestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithTraits:auditToken:throttleToken:;
- (id)reason;
- (void)encodeToXPCDictionary:;
- (BOOL)expectsReply;
- (void)setReason:;
- (id)initWithXPCDictionary:error:;
- (void)setTimestamp:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (double)timestamp;
+ (Class)replyClass;
@end
