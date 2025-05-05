@interface NEFlowMetaData : NSObject
@property (nonatomic) BOOL fastOpenRequested;
@property (nonatomic) BOOL multipathRequested;
@property (nonatomic) NSData sourceAppUniqueIdentifier;
@property (nonatomic) NSString sourceAppSigningIdentifier;
@property (nonatomic) NSData sourceAppAuditToken;
@property (nonatomic) NSUUID filterFlowIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)sourceAppUniqueIdentifier;
- (id)sourceAppAuditToken;
- (id)sourceAppSigningIdentifier;
- (id)filterFlowIdentifier;
- (BOOL)fastOpenRequested;
- (BOOL)multipathRequested;
+ (BOOL)supportsSecureCoding;
@end
