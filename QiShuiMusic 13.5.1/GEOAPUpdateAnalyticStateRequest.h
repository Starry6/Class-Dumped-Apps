@interface GEOAPUpdateAnalyticStateRequest : GEOXPCRequest
@property (nonatomic) NSInteger stateType;
@property (nonatomic) NSData state;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setState:;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)encodeToXPCDictionary:;
- (BOOL)expectsReply;
- (void)setStateType:;
- (id)initWithXPCDictionary:error:;
- (id)state;
- (BOOL)isValid;
- (void).cxx_destruct;
- (int)stateType;
+ (Class)replyClass;
@end
