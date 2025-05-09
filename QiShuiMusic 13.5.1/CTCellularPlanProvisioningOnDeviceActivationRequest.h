@interface CTCellularPlanProvisioningOnDeviceActivationRequest : NSObject
@property (nonatomic) NSString eid;
@property (nonatomic) NSString iccid;
@property (nonatomic) NSString sourceIccid;
@property (nonatomic) NSString unusableIccid;
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) NSString mcc;
@property (nonatomic) NSString mnc;
@property (nonatomic) NSString gid1;
@property (nonatomic) NSString gid2;
@property (nonatomic) NSString smdpAddress;
@property (nonatomic) BOOL useDS;
@property (nonatomic) BOOL isESim;
@property (nonatomic) NSString flowType;
- (id)init;
- (id)phoneNumber;
- (void)setPhoneNumber:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)flowType;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithEid:installIccid:sourceIccid:phoneNumber:mcc:mnc:gid1:gid2:smdp:useDS:esim:;
- (id)initWithDetails:installIccid:sourceIccid:unusableIccid:phoneNumber:mcc:mnc:gid1:gid2:smdp:useDS:esim:;
- (id)initWithDetails:installIccid:sourceIccid:unusableIccid:phoneNumber:mcc:mnc:gid1:gid2:smdp:useDS:esim:flowType:;
- (id)eid;
- (void)setEid:;
- (id)iccid;
- (void)setIccid:;
- (id)sourceIccid;
- (void)setSourceIccid:;
- (id)unusableIccid;
- (void)setUnusableIccid:;
- (id)mcc;
- (void)setMcc:;
- (id)mnc;
- (void)setMnc:;
- (id)gid1;
- (void)setGid1:;
- (id)gid2;
- (void)setGid2:;
- (id)smdpAddress;
- (void)setSmdpAddress:;
- (BOOL)useDS;
- (void)setUseDS:;
- (BOOL)isESim;
- (void)setIsESim:;
- (void)setFlowType:;
+ (BOOL)supportsSecureCoding;
@end
