@interface CTPendingPlan : CTPlan
@property (nonatomic) NSString smdpURL;
@property (nonatomic) NSString matchingID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithSmdpURL:matchingID:;
- (id)smdpURL;
- (id)matchingID;
+ (BOOL)supportsSecureCoding;
@end
