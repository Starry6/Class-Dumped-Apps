@interface DMFScheduleOSUpdateResultObject : CATTaskResultObject
@property (nonatomic) Q action;
@property (nonatomic) NSString productKey;
@property (nonatomic) NSError error;
- (unsigned long long)action;
- (id)error;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)productKey;
- (id)initWithAction:productKey:error:;
+ (BOOL)supportsSecureCoding;
@end
