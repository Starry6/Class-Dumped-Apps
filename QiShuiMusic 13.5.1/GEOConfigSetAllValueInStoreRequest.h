@interface GEOConfigSetAllValueInStoreRequest : GEOXPCRequest
@property (nonatomic) Q keyOptions;
@property (nonatomic) NSDictionary keyStringsAndValues;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)keyOptions;
- (id)keyStringsAndValues;
- (void)setKeyOptions:;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)encodeToXPCDictionary:;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setKeyStringsAndValues:;
+ (Class)replyClass;
@end
