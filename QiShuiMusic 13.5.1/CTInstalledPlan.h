@interface CTInstalledPlan : NSObject
@property (nonatomic) CTPlanIdentifier planID;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) CTPlanTransferAttributes transferAttributes;
- (id)init;
- (id)phoneNumber;
- (id)initWithCoder:;
- (BOOL)isSelected;
- (void)encodeWithCoder:;
- (id)carrierName;
- (void).cxx_destruct;
- (id)description;
- (void)setIsSelected:;
- (BOOL)isEqual:;
- (id)planID;
- (void)setPlanID:;
- (id)iccid;
- (id)transferAttributes;
- (void)setTransferAttributes:;
+ (BOOL)supportsSecureCoding;
@end
