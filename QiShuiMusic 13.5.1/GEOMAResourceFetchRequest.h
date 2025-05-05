@interface GEOMAResourceFetchRequest : GEOXPCRequest
@property (nonatomic) Q type;
@property (nonatomic) NSDictionary extras;
@property (nonatomic) Q options;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOptions:;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)setType:;
- (void)encodeToXPCDictionary:;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (void)setExtras:;
- (unsigned long long)options;
- (unsigned long long)type;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)extras;
+ (Class)replyClass;
@end
