@interface DMFFetchCertificatesResultObject : CATTaskResultObject
@property (nonatomic) NSArray certificates;
- (id)certificates;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCertificates:;
+ (BOOL)supportsSecureCoding;
@end
