@interface CTDisplayPlan : NSObject
@property (nonatomic) CTPlan plan;
@property (nonatomic) NSString carrierName;
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) NSString label;
@property (nonatomic) q status;
@property (nonatomic) Q attributes;
@property (nonatomic) BOOL isPhysical;
- (id)plan;
- (id)phoneNumber;
- (id)initWithCoder:;
- (id)label;
- (unsigned long long)attributes;
- (void)encodeWithCoder:;
- (id)carrierName;
- (void).cxx_destruct;
- (id)description;
- (long long)status;
- (BOOL)isEqual:;
- (id)initWithPlan:status:attributes:isPhysical:carrierName:phoneNumber:label:;
- (BOOL)isPhysical;
+ (BOOL)supportsSecureCoding;
@end
