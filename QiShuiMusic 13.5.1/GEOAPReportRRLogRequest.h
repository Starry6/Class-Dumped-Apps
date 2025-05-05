@interface GEOAPReportRRLogRequest : GEOXPCRequest
@property (nonatomic) NSData rrLogData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)encodeToXPCDictionary:;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)rrLogData;
- (void)setRrLogData:;
+ (Class)replyClass;
@end
