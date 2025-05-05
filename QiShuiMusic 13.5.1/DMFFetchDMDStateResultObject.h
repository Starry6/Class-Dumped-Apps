@interface DMFFetchDMDStateResultObject : CATTaskResultObject
@property (nonatomic) NSString dmdStateDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithStateDescription:;
- (id)dmdStateDescription;
- (void)setDmdStateDescription:;
+ (BOOL)supportsSecureCoding;
@end
