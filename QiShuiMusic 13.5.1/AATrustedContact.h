@interface AATrustedContact : NSObject
@property (nonatomic) NSUUID custodianID;
@property (nonatomic) q status;
@property (nonatomic) NSString handle;
@property (nonatomic) NSString firstName;
@property (nonatomic) NSString lastName;
@property (nonatomic) NSString displayName;
- (id)handle;
- (id)firstName;
- (id)lastName;
- (id)initWithCoder:;
- (id)displayName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (long long)status;
- (id)copyWithZone:;
- (id)custodianID;
- (id)initWithID:status:handle:firstName:lastName:displayName:;
+ (BOOL)supportsSecureCoding;
@end
