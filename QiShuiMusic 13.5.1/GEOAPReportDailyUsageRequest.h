@interface GEOAPReportDailyUsageRequest : GEOXPCRequest
@property (nonatomic) NSInteger usageType;
@property (nonatomic) NSString usageString;
@property (nonatomic) NSNumber usageBool;
@property (nonatomic) NSString appId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)appId;
- (int)usageType;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)setUsageBool:;
- (void)setUsageType:;
- (void)encodeToXPCDictionary:;
- (void)setAppId:;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (void)setUsageString:;
- (id)usageBool;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)usageString;
+ (Class)replyClass;
@end
