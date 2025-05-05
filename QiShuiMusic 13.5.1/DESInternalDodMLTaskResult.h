@interface DESInternalDodMLTaskResult : NSObject
@property (nonatomic) NSDictionary JSONResult;
@property (nonatomic) NSData binaryResult;
@property (nonatomic) BOOL deferred;
@property (nonatomic) NSURL deferralURL;
@property (nonatomic) double duration;
- (void).cxx_destruct;
- (id)description;
- (double)duration;
- (BOOL)deferred;
- (id)deferralURL;
- (id)JSONResult;
- (id)binaryResult;
- (id)initWithJSONResult:binaryResult:deferred:deferralURL:duration:;
@end
