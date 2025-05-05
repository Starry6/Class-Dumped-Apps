@interface UIDraggingSystemSessionInfo : NSObject
@property (nonatomic) I sessionIdentifier;
@property (nonatomic) NSInteger processIdentifier;
@property (nonatomic) {?=[8I]} auditToken;
@property (nonatomic) BOOL supportsSystemDrag;
@property (nonatomic) NSString sceneIdentifier;
- (void)setProcessIdentifier:;
- (void)setAuditToken:;
- (unsigned int)sessionIdentifier;
- (id)sceneIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setSceneIdentifier:;
- (id)auditToken;
- (void)setSessionIdentifier:;
- (void)encodeWithCoder:;
- (int)processIdentifier;
- (void).cxx_destruct;
- (id)description;
- (BOOL)supportsSystemDrag;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setSupportsSystemDrag:;
+ (BOOL)supportsSecureCoding;
@end
