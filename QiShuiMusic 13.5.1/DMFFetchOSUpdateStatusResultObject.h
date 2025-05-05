@interface DMFFetchOSUpdateStatusResultObject : CATTaskResultObject
@property (nonatomic) NSString productKey;
@property (nonatomic) Q status;
@property (nonatomic) double downloadPercentComplete;
- (void)setStatus:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)status;
- (id)initWithProductKey:status:downloadPercentComplete:;
- (id)productKey;
- (void)setProductKey:;
- (double)downloadPercentComplete;
- (void)setDownloadPercentComplete:;
+ (BOOL)supportsSecureCoding;
+ (id)descriptionForStatus:;
@end
