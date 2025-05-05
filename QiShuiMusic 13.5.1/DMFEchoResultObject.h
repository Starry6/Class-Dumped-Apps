@interface DMFEchoResultObject : CATTaskResultObject
@property (nonatomic) NSString echo;
@property (nonatomic) NSString resultStatus;
- (void)setResultStatus:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)resultStatus;
- (id)echo;
- (void)setEcho:;
+ (BOOL)supportsSecureCoding;
@end
