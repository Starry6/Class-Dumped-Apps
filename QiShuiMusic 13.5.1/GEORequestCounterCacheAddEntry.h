@interface GEORequestCounterCacheAddEntry : GEOXPCRequest
@property (nonatomic) NSString appId;
@property (nonatomic) NSDate timestamp;
@property (nonatomic) NSInteger requestKindRaw;
@property (nonatomic) C result;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned char)result;
- (id)appId;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)encodeToXPCDictionary:;
- (void)setAppId:;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (void)setTimestamp:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)timestamp;
- (void)setResult:;
- (int)requestKindRaw;
- (void)setRequestKindRaw:;
+ (Class)replyClass;
@end
