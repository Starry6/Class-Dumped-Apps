@interface GEOConfigKeyChangeNotification : GEOXPCRequest
@property (nonatomic) NSArray keyStrings;
@property (nonatomic) Q keyOptions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)keyOptions;
- (void)setKeyOptions:;
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
