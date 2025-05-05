@interface DMFFetchApplicationsResultObject : CATTaskResultObject
@property (nonatomic) NSDictionary applicationsByIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithApplicationsByIdentifier:;
- (id)applicationsByIdentifier;
+ (BOOL)supportsSecureCoding;
@end
