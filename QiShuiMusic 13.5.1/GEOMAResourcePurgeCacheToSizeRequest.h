@interface GEOMAResourcePurgeCacheToSizeRequest : GEOXPCRequest
@property (nonatomic) NSInteger urgency;
@property (nonatomic) Q targetSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)urgency;
- (void)setTargetSize:;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)encodeToXPCDictionary:;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (void)setUrgency:;
- (unsigned long long)targetSize;
- (BOOL)isValid;
+ (Class)replyClass;
@end
