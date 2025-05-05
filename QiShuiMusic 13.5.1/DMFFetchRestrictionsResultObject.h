@interface DMFFetchRestrictionsResultObject : CATTaskResultObject
@property (nonatomic) NSDictionary restrictions;
@property (nonatomic) NSDictionary globalRestrictions;
@property (nonatomic) NSDictionary profileRestrictions;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)restrictions;
- (id)initWithRestrictions:;
- (id)globalRestrictions;
- (id)profileRestrictions;
+ (BOOL)supportsSecureCoding;
@end
