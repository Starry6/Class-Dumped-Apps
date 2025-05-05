@interface GEORequestCounterCacheGetResults : GEOXPCRequest
@property (nonatomic) Q mode;
@property (nonatomic) NSString appId;
@property (nonatomic) NSDate startTime;
@property (nonatomic) NSDate endTime;
@property (nonatomic) NSInteger requestKindRaw;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)appId;
- (void)setStartTime:;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)setEndTime:;
- (void)encodeToXPCDictionary:;
- (void)setAppId:;
- (id)startTime;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (id)endTime;
- (BOOL)isValid;
- (void).cxx_destruct;
- (unsigned long long)mode;
- (void)setMode:;
- (int)requestKindRaw;
- (void)setRequestKindRaw:;
+ (Class)replyClass;
@end
