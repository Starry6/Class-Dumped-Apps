@interface AWEIMRedPacketNLPResponseModel : IESIMBaseApiModel
@property (nonatomic) q status;
@property (nonatomic) NSString errorMessage;
@property (nonatomic) NSError error;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStatus:;
- (void)setError:;
- (id)errorMessage;
- (void).cxx_destruct;
- (id)error;
- (long long)status;
- (void)setErrorMessage:;
+ (id)JSONKeyPathsByPropertyKey;
@end
