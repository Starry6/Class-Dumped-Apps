@interface AACustodianshipInfo : NSObject
@property (nonatomic) NSUUID custodianID;
@property (nonatomic) q status;
@property (nonatomic) NSString ownerHandle;
- (id)statusDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (long long)status;
- (id)copyWithZone:;
- (id)ownerHandle;
- (id)initWithID:status:ownerHandle:;
- (id)custodianID;
+ (BOOL)supportsSecureCoding;
@end
