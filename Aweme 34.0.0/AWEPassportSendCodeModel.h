@interface AWEPassportSendCodeModel : DYAPassportResponseModel
@property (nonatomic) NSNumber retryTime;
@property (nonatomic) NSString nextURL;
- (id)nextURL;
- (void)setNextURL:;
- (void).cxx_destruct;
- (id)retryTime;
- (void)setRetryTime:;
+ (id)JSONKeyPathsByPropertyKey;
@end
