@interface AWEMaskPhoneModel : NSObject
@property (nonatomic) NSString scene;
@property (nonatomic) NSString number;
@property (nonatomic) q carrier;
@property (nonatomic) NSDate requestTime;
@property (nonatomic) NSString errorMessage;
@property (nonatomic) q retryCount;
@property (nonatomic) double lastSuccessPreRequestTime;
- (double)lastSuccessPreRequestTime;
- (void)setLastSuccessPreRequestTime:;
- (id)initWithScene:number:carrier:requestTime:errorMessage:retryCount:;
- (void)setScene:;
- (id)requestTime;
- (void)setRequestTime:;
- (void)setRetryCount:;
- (id)scene;
- (void)encodeWithCoder:;
- (id)number;
- (id)errorMessage;
- (long long)retryCount;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setNumber:;
- (void)setErrorMessage:;
- (long long)carrier;
- (void)setCarrier:;
@end
