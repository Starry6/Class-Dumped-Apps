@interface DMFFetchActivationLockBypassCodeResultObject : CATTaskResultObject
@property (nonatomic) NSString bypassCode;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBypassCode:;
- (id)bypassCode;
+ (BOOL)supportsSecureCoding;
@end
