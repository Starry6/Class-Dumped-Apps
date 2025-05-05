@interface CTDanglingPlanItem : NSObject
@property (nonatomic) NSString iccid;
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) NSString simLabelID;
@property (nonatomic) CTUserLabel userLabel;
- (id)phoneNumber;
- (void)setPhoneNumber:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)iccid;
- (void)setIccid:;
- (id)simLabelID;
- (id)userLabel;
- (void)setUserLabel:;
- (id)initWithIccid:phoneNumber:label:labelID:;
- (void)setSimLabelID:;
+ (BOOL)supportsSecureCoding;
@end
