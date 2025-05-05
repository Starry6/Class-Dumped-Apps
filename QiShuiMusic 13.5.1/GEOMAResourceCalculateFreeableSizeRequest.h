@interface GEOMAResourceCalculateFreeableSizeRequest : GEOXPCRequest
@property (nonatomic) NSInteger urgency;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)urgency;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)encodeToXPCDictionary:;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (void)setUrgency:;
- (BOOL)isValid;
+ (Class)replyClass;
@end
