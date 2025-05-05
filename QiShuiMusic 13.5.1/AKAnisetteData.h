@interface AKAnisetteData : NSObject
@property (nonatomic) NSString machineID;
@property (nonatomic) NSString oneTimePassword;
@property (nonatomic) Q routingInfo;
- (void)setRoutingInfo:;
- (id)initWithCoder:;
- (id)machineID;
- (void)setMachineID:;
- (void)encodeWithCoder:;
- (void)setOneTimePassword:;
- (id)oneTimePassword;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)routingInfo;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
