@interface GEOAPReportCCActionRequest : GEOXPCRequest
@property (nonatomic) Q actionType;
@property (nonatomic) Q collectionId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)actionType;
- (void)setActionType:;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)encodeToXPCDictionary:;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (unsigned long long)collectionId;
- (void)setCollectionId:;
+ (Class)replyClass;
@end
