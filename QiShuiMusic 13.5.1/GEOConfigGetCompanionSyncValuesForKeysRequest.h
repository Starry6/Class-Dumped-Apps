@interface GEOConfigGetCompanionSyncValuesForKeysRequest : GEOXPCRequest
@property (nonatomic) NSArray keyStrings;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)encodeToXPCDictionary:;
- (void)setKeyStrings:;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)keyStrings;
+ (Class)replyClass;
@end
