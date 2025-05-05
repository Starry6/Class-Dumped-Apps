@interface GEOAPReportLogMsgRequest : GEOXPCRequest
@property (nonatomic) NSData logMsgData;
@property (nonatomic) Q uploadBatchId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)setLogMsgData:;
- (void)encodeToXPCDictionary:;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (id)logMsgData;
- (void)setUploadBatchId:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (unsigned long long)uploadBatchId;
+ (Class)replyClass;
@end
