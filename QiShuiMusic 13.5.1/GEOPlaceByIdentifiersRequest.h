@interface GEOPlaceByIdentifiersRequest : GEOXPCRequest
@property (nonatomic) NSUUID requestUUID;
@property (nonatomic) NSArray identifiers;
@property (nonatomic) NSInteger resultProvider;
@property (nonatomic) Q options;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOptions:;
- (void)setRequestUUID:;
- (id)identifiers;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)encodeToXPCDictionary:;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (id)requestUUID;
- (unsigned long long)options;
- (BOOL)isValid;
- (void)setIdentifiers:;
- (void).cxx_destruct;
- (int)resultProvider;
- (void)setResultProvider:;
+ (Class)replyClass;
@end
