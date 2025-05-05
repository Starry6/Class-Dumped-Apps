@interface DMFFetchLocationResultObject : CATTaskResultObject
@property (nonatomic) CLLocation location;
- (id)initWithLocation:;
- (id)initWithCoder:;
- (id)location;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
+ (BOOL)supportsSecureCoding;
@end
