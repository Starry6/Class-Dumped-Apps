@interface GEOAPReportDailySettingRequest : GEOXPCRequest
@property (nonatomic) NSData settings;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)settings;
- (void)setSettings:;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)encodeToXPCDictionary:;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (void).cxx_destruct;
+ (Class)replyClass;
@end
