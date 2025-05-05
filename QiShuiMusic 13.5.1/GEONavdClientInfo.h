@interface GEONavdClientInfo : NSObject
@property (nonatomic) NSString canonicalName;
@property (nonatomic) NSString uniqueClientId;
@property (nonatomic) GEOApplicationAuditToken auditToken;
- (void)setAuditToken:;
- (id)uniqueClientId;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)auditToken;
- (BOOL)isNavdClientInfo;
- (void)encodeWithCoder:;
- (id)initWithCanonicalName:instanceId:auditToken:;
- (void)setUniqueClientId:;
- (void).cxx_destruct;
- (id)initWithCanonicalName:instanceId:;
- (id)description;
- (BOOL)isCalendarClientInfo;
- (id)canonicalName;
- (void)setCanonicalName:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)clientInfoForNavdPredictions;
@end
