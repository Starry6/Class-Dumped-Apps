@interface GEOAPEvalSetModeRequest : GEOXPCRequest
@property (nonatomic) BOOL desiredEnableState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)encodeToXPCDictionary:;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (BOOL)desiredEnableState;
- (void)setDesiredEnableState:;
+ (Class)replyClass;
@end
